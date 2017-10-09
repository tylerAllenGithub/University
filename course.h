#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class course
{
 private:
  long CRN;
  int maxAvailableSeats;
  string name;
  long departID;
  long assignedSeats;
  long isTaughtBy;
  static long nextCRN;

 public:
  course();//takes no parameters
  course(string n, long depID, long taught, int maxSeats);//takes 2 longs, 1 string, 1 int
  void setCRN(long CRN);//takes 1 long
  long getCRN();//takes no parameters
  void setMaxAvailableSeats(int maxAvailableSeats);//takes 1 int
  int getMaxAvailableSeats();//takes no parameters
  void setName(string name);//takes 1 string
  string getName();//takes no parameters
  void setDepartID(long departID);//takes 1 long
  long getDepartID();//takes no parameters
  void setAssignedSeats(long assignedSeats);
  long getAssignedSeats();//takes no parameters
  void setIsTaughtBy(long isTaughtBy);
  long getIsTaughtBy();//takes no parameters
  long getNextCRN();//takes no parameters
  void print() const;//takes no parameters

};
#endif
