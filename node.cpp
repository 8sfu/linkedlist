#include <iostream>
#include <cstring>
#include "node.h"

Node::Node(Student* student){
  prevNode = nullptr;
  student = new Student();
  nexNode = nullptr;
}

void Node::setNext(Node* node){
  if(nexNode = nullptr){
    nexNode = &node;
  } else {
    cout << "this node already has a next node." << endl;
  }
}

Student* Node::getStudent(){
  return student;
}

Node* Node::getNext(){
  if(nexNode != nullptr){
    return nexNode;
  }
}

Node::~Node(){
  delete student; 
}
