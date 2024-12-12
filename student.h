#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
  int id; 
  char* name = new char[20];
  Student();
  ~Student();
};

#endif
