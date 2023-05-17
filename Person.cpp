#include "Person.h"

Person::Person(std::string first, std::string last, int num){
    first = this -> first;
    last = this -> last;
    idnum = num;
}

std::string Person::get_name(){
    return first + " " + last;
}

int Person::get_id(){
    return idnum;
}

/*
class Person{
    private:
        std::string first; // first name
        std::string last; // last name
        int idnum; // some id number

    public:
        Person(std::string first, std::string last, int num);
        std::string get_name();
        int get_id();
}
*/