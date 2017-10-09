#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;


class person
{
 protected:
  long id;
  string name;
  string email;
  string address;
  string dateOfBirth;
  string gender;

 public:
  person();//takes no parameters
  person(long id, string name, string email, string address, string dateOfBirth, string gender);
  void setID(long id);//takes 1 long
  long getID() const;//takes no parameters
  void setName(string name);//takes 1 string
  string getName() const;//takes no parameters
  void setEmail(string email);//takes 1 string
  string getEmail() const;//takes no parameters
  void setAddress(string address);//takes 1 string
  string getAddress() const;//takes no parameters
  void setDateOfBirth(string dateOfBirth);//takes 1 string
  string getDateOfBirth() const;//takes no parameters
  void setGender(string gender);//takes 1 string
  string getGender() const;//takes no parameters
  void print() const;//takes no parameters
};
#endif
