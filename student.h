#ifndef STUDENT_H
#define STUDENT_H

class Student {
public:
  char* getName();
  Student();
  ~Student();
private:
  int id;
  char* name = new char[20];
  float gpa;
};

#endif
