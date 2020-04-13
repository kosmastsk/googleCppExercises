// 07.cpp: Kosmas Tsiakas
// Description: Famous card trick

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  string number;
  cout << "Enter three-digit number: ";
  cin >> number;
  while (number.size() != 3)
  {
    cout << "Please enter a 3-digit number. Try again." << endl;
    cin >> number;
  }

  int abc = stoi(number);
  cout << "ABC: " << abc << endl;

  string bca_num;
  stringstream ss;
  ss << number.at(1);
  ss << number.at(2);
  ss << number.at(0);
  ss >> bca_num;
  int bca = stoi(bca_num);
  cout << "BCA: " << bca << endl;

  string cab_num;
  ss.str(""); // Clear the stringstream
  ss.clear();
  ss << number.at(2);
  ss << number.at(0);
  ss << number.at(1);
  ss >> cab_num;
  int cab = stoi(cab_num);
  cout << "CAB: " << cab << endl;

  int x = abc % 11;
  int y = bca % 11;
  int z = cab % 11;

  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  cout << "Z: " << z << endl;

  int sum1 = x + y;
  int sum2 = y + z;
  int sum3 = z + x;

  if (sum1 == 9 || sum2 == 9 || sum3 == 9)
  {
    cout << "A sum has been found equal to 9. Process is stopping." << endl;
    exit(0);
  }

  if (sum1 % 2 != 0)
  { // sum1 is odd
    if (sum1 + 11 < 20)
      sum1 += 11;
    else
    {
      sum1 -= 11;
    }
  }
  if (sum2 % 2 != 0)
  { // sum2 is odd
    if (sum2 + 11 < 20)
      sum2 += 11;
    else
    {
      sum2 -= 11;
    }
  }
  if (sum3 % 2 != 0)
  { // sum3 is odd
    if (sum3 + 11 < 20)
      sum3 += 11;
    else
    {
      sum3 -= 11;
    }
  }

  cout << "Sum1: " << sum1 << endl;
  cout << "Sum2: " << sum2 << endl;
  cout << "Sum3: " << sum3 << endl;

  cout << "Dividing sums in half" << endl;
  cout << sum1 / 2 << sum2 / 2 << sum3 / 2 << endl;

  return 0;
}