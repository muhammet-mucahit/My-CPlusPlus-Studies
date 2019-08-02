#ifndef _STUDENT_H_
#define _STUDENT_H_
#include "personType.h"
#include "course.h"


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class studentType : public personType{

public:
    void setInfo(string fname, string lName, int ID, int nOfCourses, bool isTPaid, courseType courses[]);
    void print(double tuitionRate);
    void print(ofstream& out, double tuitionRate);
    studentType();
    int getHoursEnrolled();
    double getGpa();
    double billingAmount(double tuitionRate);

private:
    void sortCourses();  
    int sId;
    int numberOfCourses; 
    bool isTuitionPaid;	
    courseType coursesEnrolled[6]; 
};
#endif
