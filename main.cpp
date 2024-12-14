#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

int main(){
  cout << "init" << endl << endl;
  Node* firstNode = new Node(new Student());
  cout << endl;
  firstNode->setNext(new Node(new Student()));
  // cout << "This list includes students: ";
  //firstNode->searchList();
  cout << endl;
  return 0;
}
