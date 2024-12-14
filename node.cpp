#include <iostream>
#include <cstring>
#include "node.h"

using namespace std;

Node::Node(Student* setStudent){
  student = setStudent;
  nexNode = nullptr;
}

void Node::setNext(Node* node){
  cout << endl;
  char* input = new char[20];
  if(nexNode == nullptr){
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
    cout << student->getName() << ", ";
  } else if (nexNode == nullptr) {
    cout << student->getName() << endl;
    cout << "Ending search." << endl << endl;
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
