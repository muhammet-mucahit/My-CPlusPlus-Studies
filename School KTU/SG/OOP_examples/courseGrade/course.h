#include <fstream>
#include <string>
using namespace std;

#ifndef _COURSE_H_
#define _COURSE_H_

class courseType{
public:
      void setCourseType(string cName, string cNo, char grade, int credits);
      void print(bool isGrade);
      void print(ofstream& outp, bool isGrade);
      int  getCredits();
      void getCourseNumber(string& cNo);
      char getGrade();
      courseType(string cName = "", string cNo = "", char grade = '*', int credits = 0);

private:
     string courseName;
     char   courseGrade;
     int    courseCredits;
     string courseNumber;
};
#endif
