#pragma once
#include <iostream>
#include "node.h"
#include "Person.h"

class List{
 private:
  Node *head;
 public:
  List();
  ~List();
  void insert(Person data);
};