#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

int main(){
  char* input = new char[20];
  cout << "init" << endl << endl;
  Node* firstNode = new Node(new Student());
  cout << endl;
  cout << "(enter add to add another student.)" << endl;
  cin.getline(input,20);
  if(!strcmp(input,"add")){
    firstNode->setNext(new Node(new Student()));
    cout << "This linked list includes students: ";
    firstNode->searchList();
  }
  cout << endl;
  return 0;
}
