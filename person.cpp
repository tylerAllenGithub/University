#ifndef PERSON_C
#define PERSON_C

#include <string>
#include <iostream>
using namespace std;

#include "person.h"

person::person()//takes no parameters
{
  id=0;
  name=" ";
  email=" ";
  address=" ";
  dateOfBirth=" ";
  gender=" ";
}

person::person(long id, string name, string email, string address, string dateOfBirth, string gender)
{
  this->id=id;
  this->name=name;
  this->email=email;
  this->address=address;
  this->dateOfBirth=dateOfBirth;
  this->gender=gender;
  //assign global variables to constructor arguments
}
void person::setID(long id)//takes 1 long
{
  this->id=id;//sets this variable to argument
}

long person::getID() const//takes no parameters
{
  return id;
}
void person::setName(string name)//takes 1 string
{
  this->name=name;//sets this variable to argument
}

string person::getName() const//takes no parameters
{
  return name;
}

void person::setEmail(string email)//takes 1 string
{
  this->email=email;//sets this variable to argument
}

string person::getEmail() const//takes no parameters
{
  return email;
}

void person::setAddress(string address)//takes 1 string
{
  this->address=address;//sets this variable to argument
}
string person::getAddress() const//takes no parameters
{
  return address;
}

void person::setDateOfBirth(string dateOfBirth)//takes 1 string
{
  this->dateOfBirth=dateOfBirth;//sets this variable to argument
}

string person::getDateOfBirth() const//takes no parameters
{
  return dateOfBirth;
}

void person::setGender(string gender)//takes 1 string
{
  this->gender=gender;//sets this variable to argument
}

string person::getGender() const//takes no parameters
{
  return gender;
}

void person::print() const//takes no parameters
{
  cout<<"Name: "<<name<<endl;
  cout<<"ID: "<<id<<endl;
  cout<<endl;
}
#endif

