#include <iostream>
#include "Person.h"
#include "dictionary.h"
#include "lists.h"
#include "node.h"

//Hash Function taken from the link provided in the readme 
//(https://opendsa-server.cs.vt.edu/ODSA/Books/CS3/html/HashFuncExamp.html)
int sascii(std::string x) {
   char ch[x.length()];
   // ch = x.toCharArray();
   // int xlength = x.length();

   int i, sum;
   for (sum=0, i=0; i < x.length(); i++)
      sum += ch[i];
   return sum % 10;
}

dictionary::dictionary(Person base){
   std::string key = base.get_name();
   int placement = sascii(key);
   hashTable[placement].insert(base);
}

dictionary::~dictionary(){
  //Loop through the table and delete everything
  for(int i = 0; i < 10; i++){
   hashTable[i].~List();
  }
  free(hashTable);

}

void dictionary::insert(Person newPerson){
   //Insert New Person

   //Use name as key
   std::string key = newPerson.get_name();
   int placement = sascii(key);
   hashTable[placement].insert(newPerson);
}

Person dictionary::retrieve(std::string firstName, std::string lastName){
   std::string name = lastName + ", " + firstName;
   int placement = sascii(name);
   return hashTable[placement].getPerson(name);
}

std::string dictionary::getAllKeys(){
   std::string allKeys = "";
   for(int i = 0; i < 10; i++){
      allKeys += hashTable[i].getKeys();
   }
   return allKeys;
}