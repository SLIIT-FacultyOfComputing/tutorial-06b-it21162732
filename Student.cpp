#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char *str) {
  studentId=id;
  strcpy(name,str);
  
}
// Display StudentId and Name
void Student::display() {
  cout<<"student ID :"<<studentId<<endl;
  cout << "student name :"<<name<<endl;
  
}
