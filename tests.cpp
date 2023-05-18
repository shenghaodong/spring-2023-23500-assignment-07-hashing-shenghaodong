#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "node.h"
#include "lists.h"
#include "Person.h"
#include "dictionary.h"

TEST_CASE("Tests for all"){
    Person zero = Person("Shenghao", "Dong", 0);
    Person one = Person("Miku", "Hatsune", 1);
    Person two = Person("Whyam", "Doingthis", 2);
    dictionary *test = new dictionary(zero);
    test -> insert(one);
    test -> insert(two);
    CHECK(test -> getAllKeys() == "(Hatsune, Miku), (Doingthis, Whyam), (Dong, Shenghao), ");
    Person joe = Person("Joe", "Joe", 1);
    test -> insert(joe);
    CHECK(test -> getAllKeys() == "(Hatsune, Miku), (Doingthis, Whyam), (Dong, Shenghao), (Joe, Joe), ");
    CHECK(test -> retrieve("Miku", "Hatsune").get_name() == "Hatsune, Miku");
    CHECK(test -> retrieve("Joe", "Joe").get_name() == "Joe, Joe");
    CHECK(test -> retrieve("Doesn't", "Exist").get_name() == ", ");
};