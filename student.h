#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "course.h"
#include "person.h"

class student : public person
{
 private:
  int yearOfStudy;
  string major;
  long advisorID;
  vector<course> coursesTaken;
  static long nextStID;
 public:
  student();//takes no parameters
  student(string name, string email, string address, string dateOfBirth, string gender, int yearOfStudy, string major, long advisorID);
  void setYearOfStudy(int yearOfStudy);//takes 1 int
  int getYearOfStudy();//takes no parameters
  void setMajor(string major);//takes 1 string
  string getMajor();//takes no parameters
  void setAdvisorID(long advisorID);//takes 1 long
  long getAdvisorID();//takes no parameters
  void setCoursesTaken(vector<course> coursesTaken);//takes a vector as parameters
  vector<course> getCoursesTaken();//takes no parameters
  void printCoursesTaken() const;//takes no parameters
  void print() const;//takes no parameters
};
#endif
