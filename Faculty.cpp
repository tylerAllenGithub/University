#ifndef FACULTY_C
#define FACULTY_C

#include <iostream>
using namespace std;
#include <string>
#include "Faculty.h"

long Faculty::nextFacultyID=600;

Faculty::Faculty()//takes no parameters
{
  salary=0.0;
  yearOfExp=0;
  departID=0;
  id=nextFacultyID++;
}

Faculty::Faculty(string name, string email, string address, string dateOfBirth, string gender, float salary, int yearOfExp, long departID)
{
  this->name=name;
  this->email=email;
  this->address=address;
  this->dateOfBirth=dateOfBirth;
  this->gender=gender;
  this->salary=salary;
  this->yearOfExp=yearOfExp;
  this->departID=departID;
  id=nextFacultyID++;
  //assign global variables to constructor arguments
}
void Faculty::setSalary(float salary)
{
  this->salary=salary;//sets this variable to argument
}

float Faculty::getSalary()//takes no parameters
{
  return salary;
}

void Faculty::setYearOfExp(int yearOfExp)
{
  this->yearOfExp=yearOfExp;//sets this variable to argument
}

int Faculty::getYearOfExp()//takes no parameters
{
  return yearOfExp;
}

void Faculty::setDepartID(long departID)//takes 1 long
{
  this->departID=departID;//sets this variable to argument
}

long Faculty::getDepartID()//takes no parameters
{
  return departID;
}

long Faculty::getNextFacultyID()//takes no parameters
{
  return nextFacultyID;
}

void Faculty::print() const//takes no parameters
{
  person::print();
}
#endif

