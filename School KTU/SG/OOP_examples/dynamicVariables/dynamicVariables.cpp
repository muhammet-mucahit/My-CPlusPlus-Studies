#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void printArray(char* &q)
{

  cout << "Start address of q is : " << &q << " Value of q is : " << q << endl;

}

int main(int argc, char * argv[])
{
    int  *p;

    p = new int; //create a new integer variable and assign its address to integer pointer variabl p.
                 // integer bir degisken olustur ve onun adresinin integer pointer degiskeni p'ye ata.

    *p = 28;

    cout << "Address of p is : " << p << " Value of p is : " << *p << endl;


    char *q;
    int arraySize;
    cout << "We are going to write our name using dynamic arrays, Enter array size" << endl;
    cin >> arraySize;

    q = new char[arraySize]; //create a new character array and assign its start address to character pointer variabl q.
                 // bir karakter dizisi olustur ve onun baslangic adresinin karakter pointer degiskeni q'ya ata.

    strcpy(q, "Ahmet");

    printArray(q);



    //free the dynamically allocated memory to the OS
    // Dinamik olarak ayrilmis hafizayi isletim sistemine dondur.
    delete p;
    delete []q;
    return 0;
}
