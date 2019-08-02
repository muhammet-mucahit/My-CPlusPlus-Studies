#include <iostream>
#include "cashRegister.h"
#include "Book.h"
using namespace std;
Book *first_book = NULL;
Book *current_book = NULL;


void show_selection(){

	cout << "Choose one of the options" << endl;
	cout << "1 - Search Books" << endl;
	cout << "2 - Search Author" << endl;
	cout << "3 - List All Books" << endl;
	cout << "4 - Create New Book Entry" << endl;
	cout << "5 - Sell Books" << endl;
	cout << "6 - Show Cash In Hand" << endl;
	cout << "7 - Exit" << endl;
}

void search_books(){
   Book * c_book = first_book;
   char book_name[30];

   cin.getline(book_name, 1); //newline character
   cout << "Enter the name of the book : " ;
   cin.getline(book_name, 30);

   while(c_book != NULL){
      if(c_book->get_book_name().find(book_name) != string::npos){
         c_book->print();
      }
      c_book = c_book->next_book;
   }
}

void search_authors(){
   Book * c_book = first_book;
   char author_name[30];

   cin.getline(author_name, 1); //newline character
   cout << "Enter the name of the author : " ;
   cin.getline(author_name, 30);

   while(c_book != NULL){
      if(c_book->get_book_author().find(author_name) != string::npos){
         c_book->print();
      }
      c_book = c_book->next_book;
   }

}

void show_all_books(){
   Book * c_book = first_book;

   while(c_book != NULL){
      c_book->print();
      c_book = c_book->next_book;
   }

}

void create_new_book(Book * book){
   if(first_book == NULL){
      first_book = book;
      current_book = book;
   } else {
      current_book->next_book = book;
      current_book = book;
   }
}

void create_a_new_book(){
   char book_name[30];
   char author_name[30];
   double book_price;
   int    number_in_stock;
   cin.getline(book_name, 30);
   cout << "Enter the name of the book : " ;
   cin.getline(book_name, 30);
   cout << endl << "Enter the name of the author : " ;
   cin.getline(author_name, 30);
   cout << endl << "Enter the price of the book : " ;
   cin >> book_price; //no control here
   cout << endl << "Enter numbers in stock : " ;
   cin >> number_in_stock;

   Book * book = new Book(book_name, author_name, book_price, number_in_stock, current_book->get_book_id() + 1);
   create_new_book(book);

}

void sell_book(cashRegister & cash_register){
   int book_id, number_of_books;
   double money_paid;
   Book * c_book = first_book;

   cout << "Enter the book ID" << endl;
   cin >> book_id;
   if(book_id <= 0) return; //exit quitely

   cout << "How many would you like to buy?" << endl;
   cin >> number_of_books;
   if (number_of_books <= 0){
     return; //exit
   }

   while(c_book != NULL){
     if(c_book->get_book_id() == book_id) break;
     c_book = c_book->next_book;
   }

   if(c_book == NULL){
     cout << "No such book In store" << endl << endl;
     return; //exit
   }

   if(c_book->get_book_stock() < number_of_books) {
     cout << "No Stock" << endl << endl;
     return;
   }

   cout << "Please deposit at least " << c_book->get_book_price() * number_of_books <<" TL" << endl;
   cin >> money_paid;
   if(money_paid >= c_book->get_book_price() * number_of_books) {
     cash_register.make_sale(c_book->get_book_price() * number_of_books);
     c_book->set_book_stock(c_book->get_book_stock() - number_of_books);
     cout << "Please collect your change of " << money_paid - c_book->get_book_price() * number_of_books << " TL" << endl << endl;
   } else {
     cout << "Not enough credit " << endl <<endl;
   }
}


int main()
{

    Book *c_book = new Book("For Whom the Bell Tolls", "Ernest HemingWay", 29.90, 20, 1);
    create_new_book(c_book);
    c_book = new Book("A Farewell to Arms", "Ernest HemingWay", 29.90, 20, 2);
    create_new_book(c_book);
    c_book = new Book("Death in the Afternoon", "Ernest HemingWay", 29.90, 20, 3);
    create_new_book(c_book);
    c_book = new Book("The Old Man and the Sea", "Ernest HemingWay", 29.90, 20, 4);
    create_new_book(c_book);


    cashRegister cash_register;
    int selection = 0;
    show_selection();
    while (selection != 7)
	{
		cout << endl << " : ";
		cin >> selection;

		switch (selection)
		{
		case 1:
			search_books();
			break;
		case 2:
			search_authors();
			break;
		case 3:
			show_all_books();
			break;
		case 4:
			create_a_new_book();
			break;
		case 5:
			sell_book(cash_register);
			break;
		case 6:
			cash_register.print();
			break;
		case 7:
			break;
		default:
			cout << "lutfen gecerli bi islem seciniz!" << endl;

		}

		show_selection();
    }
    return 0;
}
