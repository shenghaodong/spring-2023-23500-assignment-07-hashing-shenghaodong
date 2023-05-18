#pragma once
#include <iostream>
#include "Person.h"
#include "lists.h"
#include "node.h"

class dictionary{
    private:
        List hashTable[10];

    public:
        dictionary(Person base);
        ~dictionary();
        void insert(Person newPerson);
        Person retrieve(std::string firstName, std::string lastName);
        std::string getAllKeys();
};
