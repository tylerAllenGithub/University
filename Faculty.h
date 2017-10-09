#ifndef FACULTY_H
#define FACULTY_H

#include <iostream>
using namespace std;
#include <string>
#include "person.h"

class Faculty : public person
{
 private:
  float salary;
  int yearOfExp;
  long departID;
  static long nextFacultyID;
 public:
  Faculty();//takes no parameters
  Faculty(string name, string email, string address, string dateOfBirth, string gender, float salary, int yearOfExp, long departID);
  void setSalary(float salary);
  float getSalary();//takes no parameters
  void setYearOfExp(int yearOfExp);
  int getYearOfExp();//takes no parameters
  void setDepartID(long departID);//takes 1 long
  long getDepartID();//takes no parameters
  long getNextFacultyID();//takes no parameters
  void print() const;//takes no parameters
};
#endif
