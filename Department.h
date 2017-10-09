#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
//includes
class Department
{
 private:
  long id;
  string name;
  string location;
  long chairID;
  static long nextDepartID;
 public:
  Department();//default constructor
  Department(string depName, string depLoc, long depChairID);//constructor with 3 parameters
  void setID(long id);//Takes long parameter
  long getID();//takes no parameter
  void setName(string name);//takes string parameter
  string getName();//takes no parameter
  void setLocation(string location);//takes string parameter
  string getLocation();//takes no parameter
  void setChairID(long chairID);//takes long parameter
  long getChairID();//takes no parameter
  void print() const;//takes no parameter
};
#endif
