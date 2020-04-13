// 06.cpp: Kosmas Tsiakas
// Description: Decode the date

#include <iostream>
using namespace std;

void decodeMonth(char month)
{
  switch (month)
  {
  case 'A':
    cout << "January";
    break;
  case 'B':
    cout << "February";
    break;
  case 'C':
    cout << "March";
    break;
  case 'D':
    cout << "April";
    break;
  case 'E':
    cout << "May";
    break;
  case 'F':
    cout << "June";
    break;
  case 'G':
    cout << "July";
    break;
  case 'H':
    cout << "August";
    break;
  case 'I':
    cout << "September";
    break;
  case 'J':
    cout << "October";
    break;
  case 'K':
    cout << "November";
    break;
  case 'L':
    cout << "December";
    break;
  }
}

void decodeDate(char digit)
{
  switch (digit)
  {
  case 'Q':
    cout << 0;
    break;
  case 'R':
    cout << 1;
    break;
  case 'S':
    cout << 2;
    break;
  case 'T':
    cout << 3;
    break;
  case 'U':
    cout << 4;
    break;
  case 'V':
    cout << 5;
    break;
  case 'W':
    cout << 6;
    break;
  case 'X':
    cout << 7;
    break;
  case 'Y':
    cout << 8;
    break;
  case 'Z':
    cout << 9;
    break;
  }
}

void decodeYear(char year)
{
  switch (year)
  {
  case 'A':
    cout << 1995 + 1;
    break;
  case 'B':
    cout << 1995 + 2;
    break;
  case 'C':
    cout << 1995 + 3;
    break;
  case 'D':
    cout << 1995 + 4;
    break;
  case 'E':
    cout << 1995 + 5;
    break;
  case 'F':
    cout << 1995 + 6;
    break;
  case 'G':
    cout << 1995 + 7;
    break;
  case 'H':
    cout << 1995 + 8;
    break;
  case 'I':
    cout << 1995 + 9;
    break;
  case 'J':
    cout << 1995 + 10;
    break;
  case 'K':
    cout << 1995 + 11;
    break;
  case 'L':
    cout << 1995 + 12;
    break;
  case 'M':
    cout << 1995 + 13;
    break;
  case 'N':
    cout << 1995 + 14;
    break;
  case 'O':
    cout << 1995 + 15;
    break;
  case 'P':
    cout << 1995 + 16;
    break;
  case 'Q':
    cout << 1995 + 17;
    break;
  case 'R':
    cout << 1995 + 18;
    break;
  case 'S':
    cout << 1995 + 19;
    break;
  case 'T':
    cout << 1995 + 20;
    break;
  case 'U':
    cout << 1995 + 21;
    break;
  case 'V':
    cout << 1995 + 22;
    break;
  case 'W':
    cout << 1995 + 23;
    break;
  case 'X':
    cout << 1995 + 24;
    break;
  case 'Y':
    cout << 1995 + 25;
    break;
  case 'Z':
    cout << 1995 + 26;
    break;
  }
}

int main()
{
  string date;
  cout << "Enter date in encoded form: ";
  cin >> date;
  while (date.size() != 4)
  {
    cout << "Enter date in the correct encode format of 4 digits: ";
    cin >> date;
  }

  decodeDate(date.at(1));
  decodeDate(date.at(2));
  decodeMonth(date.at(0));
  decodeYear(date.at(3));

  return 0;
}