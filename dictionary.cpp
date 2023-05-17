#pragma once
#include <iostream>
#include <Person.h>

class dictonary{
    private:
        std::string first; // first name
        std::string last; // last name
        int idnum; // some id number

    public:
        Person(std::string first, std::string last, int num);
        std::string get_name();
        int get_id();
};

/*
You can modify the class if you'd like.

Your hash function should combine the first and last names into a
single string and then calculate the hash value. You can use a simple
hash function like from the resource site listed above.

Your *Dictionary* should support the following features:

1. One or more constructors
2. A destructor that frees all the linked lists
3. A method to insert a new Person.
4. A method to retrieve a Person (return nullptr if they're not in the
   Dictionary).
5. A Method to get all the keys - that is, all the first+last names.

   
* Important notes
1. As indiciated above, you should test your project using doctest
2. Make sure to use exceptions as we discussed in class to handle error conditions.
*/