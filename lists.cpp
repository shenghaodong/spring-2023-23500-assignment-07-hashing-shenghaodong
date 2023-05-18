#include <iostream>
#include "node.h"
#include "lists.h"
#include "Person.h"

List::List(){
  head = nullptr;
}

List::~List(){
  std::cerr << "Calling the destructor\n";
  Node *walker = head;
  Node *trailer = nullptr;
  while (walker != nullptr){
    trailer=  walker;
    walker = walker->getNext();
    delete trailer;
  }
  std::cerr << "\n";
  
  
}

// insert at the "front" (head)
void List::insert(Person data){
  Node *tmp = new Node(data);
  tmp->setNext(head);
  head = tmp;
}