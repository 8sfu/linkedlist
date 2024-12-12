#ifndef NODE_H
#define NODE_H

class Node{
public:
  Node* prevNode = nullptr;
  Student* student = nullptr;
  Node* nexNode = nullptr;
  Node(Student* student);
  void setNext(Node* node);
  Student* getStudent();
  Node* getNext();
  ~Node();
};
  
#endif
