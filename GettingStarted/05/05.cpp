// 05.cpp: Kosmas Tsiakas
// Description: Magic number

#include <iostream>
using namespace std;

int reverseNumber(int input)
{
  int reverse = 0;

  while (input != 0)
  {
    int rem = input % 10;
    reverse = reverse * 10 + rem;
    input /= 10;
  }

  return reverse;
}

int subtractNumber(int x, int y)
{
  return x - y;
}

int addNumber(int x, int y)
{
  return x + y;
}

int main()
{
  int input;
  cout << "input number: ";
  cin >> input;

  int reverse = reverseNumber(input);
  cout << "reverse it: " << reverse << endl;

  int subtract = subtractNumber(input, reverse);
  cout << "subtract it: " << input << " - " << reverse << " = " << subtract << endl;

  reverse = reverseNumber(subtract);
  cout << "reverse it: " << reverse << endl;

  int add = addNumber(subtract, reverse);
  cout << "add: " << reverse << " + " << subtract << " = " << add << endl;

  return 0;
}