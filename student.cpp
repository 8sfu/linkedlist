#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student(){ //Construct student with ids and names from console inputs
  char* input = new char[20];
  cout << "Enter an id number." << endl;
  while(!(cin >> id)){ //Preventing that pesky infinite loop from char inputs
    cout << "(Please enter an integer.)" << endl;
    cin.clear();
    cin.ignore(10000,'\n');
  }
  cin.ignore();
  cout << "Enter a name." << endl;
  cin.getline(input,20);
  strcpy(name,input);
  cout << "(Set name to: " << name << ")" << endl;
}

char* Student::getName(){
  return name;
}

Student::~Student(){
  delete[] name;
}
