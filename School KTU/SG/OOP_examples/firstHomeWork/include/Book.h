#ifndef BOOK_H
#define BOOK_H

#include "Author.h"
#include <iostream>
#include <string>

using namespace std;


class Book:public Author
{
    public:
        Book * next_book;
        Book(string = "", string = "", double = 0, int = 0, int = 0); //book_name, author_name, price, stock
        void set_book_name(string);
        void set_book_price(double);
        void set_book_stock(int);
        void print();
        string get_book_name();
        double get_book_price();
        string get_book_author();
        int    get_book_stock();
        int    get_book_id();
        virtual ~Book();
    protected:
    private:
        string book_name;
        double book_price;
        int    book_stock;
        int    book_barcode;

};

#endif // BOOK_H
