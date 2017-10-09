#ifndef DEPARTMENT_C
#define DEPARTMENT_C

#include <iostream>
using namespace std;
#include "Department.h"

long Department::nextDepartID=100;
//initialize static variables
Department::Department()//takes no parameters
{
  id=nextDepartID++;//increment nextDepartID
  name=" ";
  location=" ";
  chairID=0;//initialize all other variables to default
}

Department::Department(string depName, string depLoc,long depChairID)//takes 2 strings and 1 long
{
  name=depName;
  location=depLoc;
  chairID=depChairID;
  id=nextDepartID++;
  //assign global variables to constructor arguments
}

void Department::setID(long id)//takes 1 long
{
  this->id=id;//sets this variable to argument
}

long Department::getID()//takes no parameters
{
  return id;
}

void Department::setName(string name)//takes 1 string
{
  this->name=name;//sets this variable to argument
}

string Department::getName()//takes no parameters
{
  return name;
}

void Department::setLocation(string location)//takes no parameters
{
  this->location=location;//sets this variable to argument
}

string Department::getLocation()//takes no parameters
{
  return location;
}

void Department::setChairID(long chairID)//takes 1 long
{
  this->chairID=chairID;//sets this variable to argument
}

long Department::getChairID()//takes no parameters
{
  return chairID;
}

void Department::print() const//takes no parameters
{
  cout<<"The Department ID is: "<<id<<endl;
  cout<<"The Department Name is: "<<name<<endl;
  /*  cout<<"The Department Location is: "<<location<<endl;
  cout<<"The Department Chair ID is: "<<chairID<<endl;
  cout<<"The Next Department ID is: "<<nextDepartID<<endl;*/
  cout<<endl;
}
#endif

