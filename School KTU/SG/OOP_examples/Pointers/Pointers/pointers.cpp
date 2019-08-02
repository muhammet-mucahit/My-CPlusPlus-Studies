#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{

    int a = 25;
    int *b = &a;

    cout << "Address of a is" << &a << "And pointer variable is" << b <<endl;
    cout << "Value of register value pointed by b is (b'nin gosterdigi deger)" << *b << endl;
    *b = 40;
    cout << "value of 'a' after assigning 40 the location poited by b\
             (b'nin gosterdigi yere 40 atadiktan sonra a'nin degeri)" << a << endl;

}
