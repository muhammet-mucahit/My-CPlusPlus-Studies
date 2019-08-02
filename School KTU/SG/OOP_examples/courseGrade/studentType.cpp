
#include "studentType.h"

void studentType::setInfo(string fName, string lName, int ID, int nOfCourses, bool isTPaid, courseType courses[]) {
   
   int i;

   personType::setName(fName,lName);
	
   sId = ID;				
   isTuitionPaid = isTPaid;	
   numberOfCourses = nOfCourses ;	

   for(i = 0; i < numberOfCourses; i++)        
       coursesEnrolled[i] = courses[i];

   sortCourses();		//sort the array coursesEnrolled


}

void studentType::print(double tuitionRate) {
  int i;

  cout<<"Student Name: ";	
  personType::print();
  cout<<endl;

  cout<<"Student ID: "<<sId<<endl;

  cout<<"Number of courses enrolled: "
      <<numberOfCourses<<endl;
  cout<<endl;

  cout<<left;

  cout<<"Course No"<<setw(15)<<"Course Name" <<setw(8)<<"Credits" <<setw(6)<<"Grade"<<endl;

  cout.unsetf(ios::left);

  for(i = 0; i < numberOfCourses; i++)
    coursesEnrolled[i].print(isTuitionPaid);
  cout<<endl;

  cout<<"Total number of credit hours: " <<getHoursEnrolled()<<endl;

  cout<<fixed<<showpoint<<setprecision(2);

  if(isTuitionPaid)
    cout<<"Mid-Semester GPA: "<<getGpa()<<endl;
  else
  {
    cout<<"*** Grades are being held for not paying "
          <<"the tuition. ***"<<endl;
    cout<<"Amount Due: "<<billingAmount(tuitionRate) <<endl;
   }
   cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl<<endl;
}

void studentType::print(ofstream& outp, double tuitionRate) {
  int i;
  string first;
  string last;

  personType::getName(first,last);
	
  outp<<"Student Name: "<<first<<" "<<last<<endl;

  outp<<"Student ID: "<<sId<<endl;

  outp<<"Number of courses enrolled: "
      <<numberOfCourses<<endl;
  outp<<endl;

  outp<<left;
  outp<<"Course No"<<setw(15)<<"  Course Name"
      <<setw(8)<<"Credits"
      <<setw(6)<<"Grade"<<endl;

  outp.unsetf(ios::left);
  for(i = 0; i < numberOfCourses; i++)
    coursesEnrolled[i].print(outp,isTuitionPaid);
  outp<<endl;

  outp<<"Total number of credit hours: "
      <<getHoursEnrolled()<<endl;

  outp<<fixed<<showpoint<<setprecision(2);

  if(isTuitionPaid)
    outp<<"Mid-Semester GPA: "<<getGpa()<<endl;
  else
  {
    outp<<"*** Grades are being held for not paying "
        <<"the tuition. ***"<<endl;
    outp<<"Amount Due: "<<billingAmount(tuitionRate)<<endl;
  }

  outp<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl<<endl;
}

studentType::studentType() {

}

int studentType::getHoursEnrolled() {
  int totalCredits = 0;
  int i;

  for(i = 0; i < numberOfCourses; i++)
    totalCredits += coursesEnrolled[i].getCredits();

  return totalCredits;
}

double studentType::getGpa() {
  int i;
  double sum = 0.0;

  for(i = 0; i < numberOfCourses; i++)
  {
     switch(coursesEnrolled[i].getGrade())
    {
      case 'A': sum += coursesEnrolled[i].getCredits() * 4;
			     break;
      case 'B': sum += coursesEnrolled[i].getCredits() * 3;
			     break;
      case 'C': sum += coursesEnrolled[i].getCredits() * 2;
			     break;
      case 'D': sum += coursesEnrolled[i].getCredits() * 1;
			     break;
      case 'F': sum += coursesEnrolled[i].getCredits() * 0;
			     break;
      default: cout<<"Invalid Course Grade "<< coursesEnrolled[i].getGrade() <<endl;
    }
  }
  return sum / getHoursEnrolled();
}


double studentType::billingAmount(double tuitionRate) {
  return tuitionRate * getHoursEnrolled();
}


void studentType::sortCourses() {
  int i,j;
  int minIndex;
  courseType tempCourse;
  string course1;
  string course2;

  for(i = 0; i < numberOfCourses - 1; i++)
  {
    minIndex = i;
    for(j = i + 1; j < numberOfCourses; j++)
    {
      coursesEnrolled[minIndex].getCourseNumber(course1); 
      coursesEnrolled[j].getCourseNumber(course2);

      if(course1 > course2)
        minIndex = j;
    }//end for
    tempCourse = coursesEnrolled[minIndex];
    coursesEnrolled[minIndex] = coursesEnrolled[i];
    coursesEnrolled[i] = tempCourse;
  }
}



