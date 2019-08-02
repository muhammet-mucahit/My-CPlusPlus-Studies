#include <iostream>

using namespace std;

const int MAX_NUM_1 = 10;

struct myStruct {
   char field1; char field2;
};


struct myStruct myArray[MAX_NUM_1];
void printMyStructArray(struct myStruct * myStArray) {
   int i;
   for (i = 0; i < MAX_NUM_1; i ++)
      cout << (myStArray + i)->field1 << "|" << (myStArray + i)->field2 << endl;
}

int main (int argc, char *argv[]) {
   int i = 0;

   for (i = 0; i < MAX_NUM_1; i ++) 
        myArray[i].field1 = ' '; myArray[i].field2 = ' ';

   i = 0; 
   myArray[i  ].field1 = 'e'; myArray[i++].field2 = 'k'; 
   myArray[i  ].field1 = 'n'; myArray[i ++].field2 = 'r';
   myArray[i  ].field1 = 'o'; myArray[i++].field2 = 'o'; 
   myArray[i  ].field1 = 'd'; myArray[i ++].field2 = 'w';
   myArray[i  ].field1 = ' '; myArray[i++].field2 = ' '; 
   myArray[i  ].field1 = 'l'; myArray[i ++].field2 = 't';
   myArray[i  ].field1 = 'l'; myArray[i++].field2 = 'a'; 
   myArray[i  ].field1 = 'e'; myArray[i ++].field2 = 'e';
   myArray[i  ].field1 = 'W'; myArray[i++].field2 = 'r'; 
   myArray[i  ].field2 = ' '; myArray[i ++].field2 = 'G';
 
   printMyStructArray(&myArray[0]);

   return 0;
}
