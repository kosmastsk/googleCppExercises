// 01.cpp, Kosmas Tsiakas
// Description: Find the next number that is a perfect square and also the sum of a series 1...n

#include <iostream>
#include <math.h>
using namespace std;

// Check the series and return n if the sum of series exists, else return 0
bool sumSeriesExist(int number, int &end)
{
  bool exists = 0;
  int sum = 0;
  int current = 0;
  while (sum < number)
  {
    current++;
    sum += current;
  }
  // A sum of series 1..current exists
  if (sum == number)
  {
    end = current;
    exists = 1;
  }

  return exists;
}

bool isPerfectSquare(int number, int &square)
{
  square = sqrt(number);
  return ((sqrt(number) - floor(sqrt(number))) == 0);
}

bool check(int number, int &square, int &n)
{
  bool exists = 0;

  if (isPerfectSquare(number, square) && sumSeriesExist(number, n))
    exists = 1;

  return exists;
}

int main()
{
  // Start checking numbers from 1226
  bool found = 0;
  int current_number = 1225;
  int square;
  int n; // end of series
  while (!found)
  {
    current_number++;
    cout << "Checking: " << current_number << endl;
    found = check(current_number, square, n);
  }
  cout << "The next number found is: " << current_number << endl;
  cout << "It is the perfect square of: " << square << endl;
  cout << "It is the sum of the series 1.." << n << endl;
  return 0;
}