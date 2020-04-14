// 02.cpp, Kosmas Tsiakas
// Description: Calculate college book store business

#include <iostream>
using namespace std;

double total_cost = 0;
double total_profit = 0;

void readData(int &code, int &inventory, int &enrollment, double &price, bool &required, bool &new_book)
{
  cout << endl
       << "Please enter the book code: ";
  cin >> code;

  cout << " single copy price: ";
  cin >> price;

  cout << " number on hand: ";
  cin >> inventory;

  cout << " prospective enrollment: ";
  cin >> enrollment;

  cout << " 1 for reqd/0 for optional: ";
  cin >> required;

  cout << " 1 for new/0 for used: ";
  cin >> new_book;
}

void printData(int code, int inventory, int enrollment, double price, bool required, bool new_book)
{
  cout << "***************************************************" << endl;
  cout << "Book: " << code << endl;
  cout << "Price: " << price << endl;
  cout << "Inventory: " << inventory << endl;
  cout << "Enrollment: " << enrollment << endl;
  string req = "required";
  string new_b = "used";
  if (!required)
    req = "not required";
  if (new_book)
  {
    new_b = "new";
  }
  cout << endl
       << "This book is " << req << " and " << new_b << endl;
}

void calculateNeeds(int code, int inventory, int enrollment, double price, bool required, bool new_book)
{
  int order = 0;
  double cost = 0;

  if (new_book && required)
  {
    order = 0.9 * enrollment - inventory;
    cost = order * price;
  }
  else if (!new_book && required)
  {
    order = 0.65 * enrollment - inventory;
    cost = order * price;
  }
  else if (new_book && !required)
  {
    order = 0.40 * enrollment - inventory;
    cost = order * price;
  }
  else if (!new_book && !required)
  {
    order = 0.20 * enrollment - inventory;
    cost = order * price;
  }

  total_cost += cost;
  total_profit += 0.2 * cost; //the store pays 80% of list price

  cout << "***************************************************" << endl;
  cout << "Need to order: " << order << endl;
  cout << "Total cost: $" << cost << endl;
  cout << "***************************************************" << endl;
}

void printTotal()
{
  cout << "***************************************************" << endl;
  cout << "Total for all orders: $" << total_cost << endl;
  cout << "Profit: $" << total_profit << endl;
  cout << "***************************************************" << endl;
}

int main()
{
  int code, inventory, enrollment;
  double price;
  bool required, new_book;

  bool accept_books = 1;

  while (accept_books)
  {
    readData(code, inventory, enrollment, price, required, new_book);

    printData(code, inventory, enrollment, price, required, new_book);

    calculateNeeds(code, inventory, enrollment, price, required, new_book);

    cout << endl
         << "Enter 1 to do another book, 0 to stop.";
    cin >> accept_books;
  }

  printTotal();
  return 0;
}