#include <iostream>

using namespace std;

int main()
{
  int *first;
  int *second;

  first = new int[10];
  for(int i = 0; i < 10; i ++)
    first[i] = i;
  second = first;//shallow copy


  second = new int[10];

  for(int j = 0; j < 10; j++) //deep copy
    second[j] = first[j];


  cout << "Hello world!" << endl;

  delete [] second;
  return 0;
}
