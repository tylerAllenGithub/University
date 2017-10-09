#ifndef COURSE_C
#define COURSE_C

#include <iostream>
#include <string>
using namespace std;

#include "course.h"

long course::nextCRN=200;
//initialize static variable
course::course()//takes no parameters
{//initialize
  CRN=nextCRN++;
  maxAvailableSeats=0;
  name=" ";
  departID=0;
  assignedSeats=0;
  isTaughtBy=0;
}

course::course(string n, long depID, long taught, int maxSeats)
{
  name=n;
  departID=depID;
  isTaughtBy=taught;
  maxAvailableSeats=maxSeats;
  CRN=nextCRN++;
  assignedSeats=0;
  //assign global variables to constructor arguments
}

void course::setCRN(long CRN)//takes 1 long
{
  this->CRN=CRN;//sets this variable to argument
}

long course::getCRN()//takes no parameters
{
  return CRN;
}

void course::setMaxAvailableSeats(int maxAvailableSeats)
{
  this->maxAvailableSeats=maxAvailableSeats;//sets this variable to argument
}

int course::getMaxAvailableSeats()//takes no parameters
{
  return maxAvailableSeats;
}

void course::setName(string name)//takes 1 string
{
  this->name=name;//sets this variable to argument
}

string course::getName()//takes no parameters
{
  return name;
}

void course::setDepartID(long departID)//takes 1 long
{
  this->departID=departID;//sets this variable to argument
}

long course::getDepartID()//takes no parameters
{
return departID;
}

void course::setAssignedSeats(long assignedSeats)//takes 1 long
{
  this->assignedSeats=assignedSeats;//sets this variable to argument
}

long course::getAssignedSeats()//takes no parameters
{
return assignedSeats;
}

void course::setIsTaughtBy(long isTaughtBy)//takes 1 long
{
  this->isTaughtBy=isTaughtBy;//sets this variable to argument
}

long course::getIsTaughtBy()//takes no parameters
{
return isTaughtBy;
}

long course::getNextCRN()//takes no parameters
{
  return nextCRN;
}

void course::print() const//takes no parameters
{
  cout<<"The CRN is: "<<CRN<<endl;
  cout<<"The Course Name is: "<<name<<endl;
  cout<<endl;
}
#endif

