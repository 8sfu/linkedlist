#ifndef NODE_H
#define NODE_H
#include "student.h"

class Node{
public:
  Node(Student* student);
  void searchList();
  void setNext(Node* node);
  Student* getStudent();
  Node* getNext();
  ~Node();
private:
  Node* prevNode = nullptr;
  Student* student = nullptr;
  Node* nexNode = nullptr;
};
  
#endif
