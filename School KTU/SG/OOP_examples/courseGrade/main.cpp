
#include <iostream>
#include <fstream>
#include <string>


#include "studentType.h"


const int maxNumberOfStudents = 10; 

void getStudentData(ifstream& infile, studentType studentList[], int numberOfStudents);

void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents,  double tuitionRate);

int main()
{
	studentType studentList[maxNumberOfStudents];

	int noOfStudents;
	double tuitionRate;

	ifstream infile;
	ofstream outfile;
        infile.open("stData.txt");

	if(!infile)
	{
	   cout<<"Input file does not exist. "
  		 <<"Program terminates."<<endl;	
   	   return 1;
	}

	outfile.open("sDataOut.txt");

	infile>>noOfStudents;   //get the number of students
	infile>>tuitionRate;	//get the tuition rate
        cout << "num of students "<<noOfStudents << "rate " << tuitionRate << endl;

	getStudentData(infile, studentList, noOfStudents);
	printGradeReports(outfile, studentList, 
  			      noOfStudents, tuitionRate);

	return 0;
}

void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents, double tuitionRate)
{
    int count;

    for(count = 0; count < numberOfStudents; count++)
	   studentList[count].print(outfile,tuitionRate);
}


void getStudentData(ifstream& infile, studentType studentList[], int numberOfStudents)
{
		//Local variable
   string fName;	//variable to store the first name
   string lName;	//variable to store the last name
   int ID;	 //variable to store the student ID
   int noOfCourses;   
   char isPaid;	
   bool isTuitionPaid;	
 
   string cName;	//variable to store the course name
   string cNo;	 //variable to store the course number
   int credits; //variable to store the course credit hours
   char grade;	//variable to store the course grade

   int count;	//loop control variable
   int i;		//loop control variable

   courseType courses[6]; 
   for(count = 0; count < numberOfStudents; count++) 
   {
     infile>>fName>>lName>>ID>>isPaid;	//Step 1

     if(isPaid == 'Y')				//Step 2
       isTuitionPaid = true;
     else 
       isTuitionPaid = false;
	
     infile>>noOfCourses;				//Step 3
     
     cout << "no of Courses " << noOfCourses << endl;

     for(i = 0; i < noOfCourses; i++)		//Step 4
     {
       infile>>cName>>cNo>>credits>>grade;		
       courses[i].setCourseType(cName, cNo, grade, credits);
     }

     studentList[count].setInfo(fName, lName, ID, noOfCourses, isTuitionPaid,    courses);
   }//end for
}
