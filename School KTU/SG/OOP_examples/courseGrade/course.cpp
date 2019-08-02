#include <iostream>
#include <iomanip> 
#include <fstream>
#include <string>
#include "course.h"


void courseType::setCourseType(string cName, string cNo, char grade, int credits){
  courseName = cName;
  courseGrade = grade;
  courseCredits = credits;
  courseNumber = cNo;
}

void courseType::print(bool isGrade) {
  cout << left;
  cout << setw(8) << courseNumber << "  ";
  cout << setw(15) << courseName;

  cout.unsetf(ios::left);

  cout << setw(3) << courseCredits << "  ";

  if (isGrade) 
     cout << setw(4) << courseGrade << endl;
  else
     cout << setw(4) << "***" << endl;
}

void courseType::print(ofstream& outp, bool isGrade) {
  outp << left;
  outp << setw(8) << courseNumber << "  ";
  outp << setw(15) << courseName;

  outp.unsetf(ios::left);

  outp << setw(3) << courseCredits << "  ";

  if (isGrade) 
     outp << setw(4) << courseGrade << endl;
  else
     outp << setw(4) << "***" << endl;
}

courseType::courseType (string cName, string cNo, char grade, int credits) {
  courseName = cName;
  courseGrade = grade;
  courseCredits = credits;
  courseNumber = cNo;
}

void courseType::getCourseNumber(string& cNo){
  courseNumber = cNo;
}

char courseType::getGrade() {
  return courseGrade;
}

int  courseType::getCredits() {
  return courseCredits;
}
