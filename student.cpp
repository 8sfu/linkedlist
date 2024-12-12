#include <iostream>
#include <cstring>
#include "student.h"

Student::Student(){
  char* input = new char[20];
  cout << "Enter an id number." << endl;
  cin >> id;
  cin.ignore();
  cout << "Enter a name." << endl;
  cin.getline(input,20);
  name = input;
}

Student::~Student(){
  delete name;
}
