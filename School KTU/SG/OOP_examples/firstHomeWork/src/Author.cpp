#include "Author.h"

Author::Author(string a_name)
{
     author_name = a_name;
    //ctor
}

void Author::set_name(string a_name){
	author_name = a_name;
}

void Author::print(){
	cout << author_name << endl;
}

string Author::get_name(){
	return author_name;
}

Author::~Author()
{
    //dtor
}
