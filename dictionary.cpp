#include <iostream>
#include "Person.h"
#include "dictionary.h"
#include "lists.h"

dictionary::dictionary(){
   std::cout << "DO NOTHING FOR NOW" << std::endl;
}

dictionary::~dictionary(){
  //Loop through the table and delete everything
  for(int i = 0; i < 10; i++){
   hashTable[i].~List();
  }
  free(hashTable);

}

void insert(Person newPerson){
   //Insert New Person
}

Person retrieve(std::string firstName, std::string lastName){
   Person hello = new* Person();
   return hello;

}

std::string getAllKeys(){

}

//Hash Function taken from the link provided in the readme 
//(https://opendsa-server.cs.vt.edu/ODSA/Books/CS3/html/HashFuncExamp.html)
int sascii(std::string x, int m) {
   char ch[x.length()];
   // ch = x.toCharArray();
   // int xlength = x.length();

   int i, sum;
   for (sum=0, i=0; i < x.length(); i++)
      sum += ch[i];
   return sum % m;
}