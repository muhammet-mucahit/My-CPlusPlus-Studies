#ifndef AUTHOR_H
#define AUTHOR_H

#include <iostream>
#include <string>

using namespace std;



class Author
{
    public:
        Author(string = "");
        void set_name(string a_name);							// isim atama
	    void print();
	    string get_name();
        virtual ~Author();
    protected:
    private:
	    string author_name;
};

#endif // AUTHOR_H
