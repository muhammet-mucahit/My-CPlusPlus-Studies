#include <iostream>

struct studentType

{

    char name[26];

    double gpa;

    int ssn;

    char grade;

};

studentType    student;

studentType*   studentPtr;

using namespace std;

int main(int argc, char * argv[])
{
    studentPtr = &student;

    studentPtr->gpa = 3.9;

    cout << "Gpa of student " << studentPtr->gpa << " for pointer variable " << student.gpa << " for struct variable " << endl;
    return 0;
}
