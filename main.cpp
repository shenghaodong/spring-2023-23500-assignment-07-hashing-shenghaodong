#include <iostream>
#include "Person.h"
#include "node.h"
#include "lists.h"
#include "dictionary.h"


int main(){
    Person zero = Person("Shenghao", "Dong", 0);
    Person one = Person("Miku", "Hatsune", 1);
    Person two = Person("Whyam", "Doingthis", 2);
    dictionary *test = new dictionary(zero);
    test -> insert(one);
    test -> insert(two);
    std::cout << test -> getAllKeys() << std::endl;
    return 0;
}