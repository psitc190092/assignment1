#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
     string customer_name; //used to store user action name
     int choice; // used to store user action choice of item he wants to purchase
     double quantity_sold; // used to store quantity sold
     float vat = 0.12;
     int printer = 400;
     int table = 500;
     int phone = 700;
     int  uniqueId;
     string item_bought;
     double vat_amount;
     double amount_owed;
     double amount_you_have;
     double amount_to_add;
     double balance;
     string item;

     cout << "WHAT IS YOUR NAME ? " << endl;
     cin >> customer_name;
     cout << "WHAT IS YOUR UNIQUE ID? " << endl;
     cin >> uniqueId;
     cout << "" << endl;

     cout << "WELCOME  MR. " << customer_name << " TO INF SUPERMARKET!" << endl << endl;
     cout << "These are the items we have in stock: " << endl << endl;
     cout << "1.Printer  @ GHC 50" << endl;
     cout << "2.Phone    @ GHC 70" << endl;
     cout << "3.Table    @ GHC 30" << endl << endl;
     cout << "What item do you want to buy? " << endl;
     cin >> item_bought;
     cout << "" << endl;
     cout << "Please enter the items reference number " << endl;
     cin >> choice;
     cout << "" << endl;
     cout << "How many items would you like to purchase? " << endl;
     cin >> quantity_sold;
     cout << "" << endl;
     vat_amount = vat * quantity_sold;

     switch(choice){
       case 1: amount_owed = (printer * quantity_sold)+vat_amount;
       cout << "Total Cost of Item Purchased is GHC " << amount_owed  << endl << endl;
       break;
        case 2: amount_owed = (phone * quantity_sold)+vat_amount;
       cout << "Total Cost of Item Purchased is GHC " << amount_owed << endl << endl;
       break;
       case 3: amount_owed = (table * quantity_sold)+vat_amount;
       cout << "Total Cost of Item Purchased is GHC" << amount_owed << endl << endl;
       break;
       default: cout << "Enter a figure from 1 to 3 ";

     }
      cout << "" << endl;
      cout << "Please how much do you have " << endl;
      cin >> amount_you_have;
    amount_to_add = amount_owed - amount_you_have;
    balance = amount_you_have - amount_owed;

    if (amount_you_have > amount_owed){
        cout << "Your balance is GHC " << balance << endl;
    }
     else;
       if(amount_you_have < amount_owed){
         cout << "You still owe " << amount_to_add << endl;
       }





     cout << "======================================" << endl;
     cout << "         INF SUPERMARKET RECEIPT" << endl;
     cout << "======================================" << endl;

     cout << "NAME: " << customer_name << endl;
     cout << "UNIQUE ID: " << uniqueId << endl;
     time_t tt;
      struct tm * ti;
      time (&tt);
      ti = localtime(&tt);
       cout << "CURRENT DAY,DATE AND TIME IS: "<<asctime(ti) << endl << endl;
    cout << setw(5) << "QUANTITY" << setw(15) << "ITEM BOUGHT " << setw(15) << "TOTAL COST" << setw(15) << "VAT AMOUNT" << endl;
     cout <<setw(5) << quantity_sold << setw(15) << item_bought << setw (15) << amount_owed << setw(15) << vat_amount << endl << endl ;
     cout << setw(60) << "TOTAL AMOUNT PAID: " << amount_you_have << endl;
     cout << setw(50) << "BALANCE: " << amount_to_add<< endl << endl;
     cout << "THANK YOU MR." << customer_name <<"" << " FOR TRANSACTING WITH US" << endl;
     return 0;
}
