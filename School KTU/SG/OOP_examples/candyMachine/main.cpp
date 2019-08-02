#include <iostream>
#include "dispenserType.h"
#include "cashRegister.h"

using namespace std;

void showSelection () {
  cout << "Welcome to OOP class's Candy Shop" << endl;
  cout << "To Select an Item Enter," << endl;
  cout << "1 for Candy" << endl;
  cout << "2 for Chips" << endl;
  cout << "3 for Gum" << endl;
  cout << "4 for Cookies" << endl;
  cout << "9 for Exit" << endl;
}

void sellProduct(dispenserType& product, cashRegister& pCounter ) {
   int amountEntered, amountEntered2;
   if (product.count() > 0) {
      cout << "Please deposit" << product.productCost() << "kurush" << endl;
      cin  >> amountEntered;
      if (amountEntered < product.productCost ()) {
         cout << "Please Enter" << product.productCost() - amountEntered << "more" << endl;

         cin >> amountEntered2;
         amountEntered += amountEntered2;
         
       } 
        
        if (amountEntered >= product.productCost()) {
           pCounter.acceptAmount (amountEntered);
           product.makeSale();
           cout << "Collect your item" << endl; 
         } else cout << "Get some more money from your father" << endl;
        
      
    } else {
       cout << "Sorry, this item is sold out." << endl;
     }

}


int main() {
  cashRegister counter;
  dispenserType candy(50, 50);
  dispenserType chips(10, 65);
  dispenserType gum(5, 75);
  dispenserType cookie(3, 125);
  int choice;
   showSelection();

    cin >> choice;

     while (choice != 9) {
       switch (choice ) {
          case 1:
                sellProduct(candy, counter);
          case 2:
                sellProduct(chips, counter);
          case 3:
                sellProduct(gum, counter);
          case 4:
                sellProduct(cookie, counter);
          default :
                cout << "Invalid Selection" << endl;
         }
        showSelection();
        cin >> choice;
      }

  return 0;
}
