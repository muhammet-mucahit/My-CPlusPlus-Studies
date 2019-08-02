#include "Book.h"

Book::Book(string b_name, string a_name, double b_price, int b_stock, int b_id)
{
     book_name = b_name;
     book_price = b_price;
     book_stock = b_stock;
     book_barcode = b_id;
     set_name(a_name);
    //ctor
}

void Book::set_book_name(string b_name){
     book_name = b_name;
}

void Book::set_book_price(double b_price){
     book_price = b_price;
}

void Book::set_book_stock(int b_stock){
     book_stock = b_stock;
}

void Book::print(){
     cout << "Book Name       :" << book_name << endl;
     cout << "Author          :" << get_book_author() << endl;
     cout << "Price           :" << book_price << endl;
     cout << "Number in Stock :" << book_stock << endl;
     cout << "Book barcode    :" << book_barcode << endl << endl;

}

string Book::get_book_name(){
     return book_name;
}

string Book::get_book_author(){
     return get_name();
}

double Book::get_book_price(){
     return book_price;
}

int Book::get_book_stock(){
     return book_stock;
}

int Book::get_book_id(){
    return book_barcode;
}

Book::~Book()
{
    //dtor
}
