#include <iostream>

struct studentType

{

    char name[26];

    double gpa;

    int ssn;

    char grade;

};

studentType    student[10];

studentType*   studentPtr;

using namespace std;

int main(int argc, char * argv[])
{
    studentPtr = &student[0];

    studentPtr->gpa = 3.9;

    studentPtr ++;

    studentPtr->gpa = 3.8;

    cout << "Gpa of student 1 " << student[0].gpa << " Gpa for student 2 is " << student[1].gpa <<  endl;
    return 0;
}
