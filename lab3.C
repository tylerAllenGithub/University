/*Tyler Allen
Lab 3
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class Person
{
public:
  long SSN;
  string Fname;
  string Lname;
  int Age;
  char Gender;
};

class Course
{
public:
  long CourseNum;
  string CourseName;
};

class Student
{
public:
  long StNo;
  Course Course1;
  Course Course2;
  Course Course3;
};

class StudentProfile
{
public:
  Person PersonalInfo;
  Student StdInfo;
};

int main()
{
  ifstream fin;
  fin.open("data2.txt");
  if(!fin)
    {
      cout<<"Cannot open file."<<endl;
    }
  else
    {
      int count=0;
      vector<StudentProfile> StCollection;
     StudentProfile stuProf;
     StCollection.push_back(stuProf);
     fin>>StCollection[count].PersonalInfo.SSN;
     while(fin)
       {
	 cout<<StCollection[count].PersonalInfo.SSN<<" ";
	 fin>>StCollection[count].PersonalInfo.Fname;
	 cout<<StCollection[count].PersonalInfo.Fname<<" ";
	 fin>>StCollection[count].PersonalInfo.Lname;
	 cout<<StCollection[count].PersonalInfo.Lname<<" ";
	 fin>>StCollection[count].PersonalInfo.Age;
	 cout<<StCollection[count].PersonalInfo.Age<<" ";
	 fin>>StCollection[count].PersonalInfo.Gender;
	 cout<<StCollection[count].PersonalInfo.Gender<<" ";
	 fin>>StCollection[count].StdInfo.StNo;
	 cout<<StCollection[count].StdInfo.StNo<<" ";
	 fin>>StCollection[count].StdInfo.Course1.CourseNum;
	 cout<<StCollection[count].StdInfo.Course1.CourseNum<<" ";
	 fin>>StCollection[count].StdInfo.Course1.CourseName;
	 cout<<StCollection[count].StdInfo.Course1.CourseName<<" ";
	 fin>>StCollection[count].StdInfo.Course2.CourseNum;
	 cout<<StCollection[count].StdInfo.Course2.CourseNum<<" ";
         fin>>StCollection[count].StdInfo.Course2.CourseName;
	 cout<<StCollection[count].StdInfo.Course2.CourseName<<" ";
	 fin>>StCollection[count].StdInfo.Course3.CourseNum;
	 cout<<StCollection[count].StdInfo.Course3.CourseNum<<" ";
         fin>>StCollection[count].StdInfo.Course3.CourseName;
	 cout<<StCollection[count].StdInfo.Course3.CourseName<<" ";
	 StCollection.push_back(stuProf);
	 cout<<endl;
	 count++;
	 fin>>StCollection[count].PersonalInfo.SSN;
       }
     
    }
  return 0;
}
