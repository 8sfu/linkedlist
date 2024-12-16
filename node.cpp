#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* student){
  this->student = student;
  nexNode = nullptr;
}

void Node::setNext(Node* node){
  cout << endl;
  char* input = new char[20];
  if(this->getNext() == nullptr){ //Assignment desc said we needed to use getNext() :/
    nexNode = node;
  }
  cout << "(enter add to add another student.)" << endl;
  cin.getline(input,20);
  if (strcmp(input,"add")) {
    return;
  }
  node->setNext(new Node(new Student()));
}

void Node::searchList(){
  if(nexNode != nullptr){
    cout << ", " << nexNode->getStudent()->getName(); //Assignment desc said we needed to use getStudent() :/
  } else if (nexNode == nullptr) {
    return;
  }
  nexNode->searchList();
}

Student* Node::getStudent(){
  return student;
}

Node* Node::getNext(){
  if(nexNode != nullptr){
    return nexNode;
  }
  return nullptr;
}

Node::~Node(){
  delete student; 
}
