#ifndef STUDENT_C
#define STUDENT_C

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "course.h"
#include "person.h"
#include "student.h"

long student::nextStID=500;

student::student()//takes no parameters
{
  yearOfStudy=0;
  major=" ";
  advisorID=0;
 id=nextStID++;
}

student::student(string name, string email, string address, string dateOfBirth, string gender, int yearOfStudy, string major, long advisorID)
{
  this->name=name;
  this->email=email;
  this->address=address;
  this->dateOfBirth=dateOfBirth;
  this->gender=gender;
  this->yearOfStudy=yearOfStudy;
  this->major=major;
  this->advisorID=advisorID;
  id=nextStID++;
  //assign global variables to constructor arguments
}

void student::setYearOfStudy(int yearOfStudy)
{
  this->yearOfStudy=yearOfStudy;//sets this variable to argument
}

int student::getYearOfStudy()//takes no parameters
{
  return yearOfStudy;//sets this variable to argument
}

void student::setMajor(string major)//takes no parameters
{
  this->major=major;//sets this variable to argument
}

string student::getMajor()//takes no parameters
{
  return major;
}

void student::setAdvisorID(long advisorID)//takes 1 long
{
  this->advisorID=advisorID;//sets this variable to argument
}

long student::getAdvisorID()//takes no parameters
{
  return advisorID;
}

void student::setCoursesTaken(vector<course> coursesTaken)
{
  if(this->coursesTaken.size()>0)
    {
      for(int i=0; i<coursesTaken.size();i++)
        this->coursesTaken.pop_back();
    }
  for(int i=0; i<coursesTaken.size();i++)
    this->coursesTaken.push_back(coursesTaken[i]);

}

vector<course> student::getCoursesTaken()//takes no parameters
{
  return coursesTaken;
}
void student::printCoursesTaken() const//takes no parameters
{
   for(int i=0; i<coursesTaken.size();i++)
    {
      coursesTaken[i].print();
    }

}
void student::print() const//takes no parameters
{
   person::print();
}
#endif
