// 03.cpp: Kosmas Tsiakas
// Description: Output the number of hours, minutes and seconds given the number of seconds

#include <iostream>
#include <cstdlib>
using namespace std;

div_t calculateHours(int seconds)
{
  return div(seconds, 60 * 60);
}

div_t calculateMinutes(int seconds)
{
  return div(seconds, 60);
}

int main()
{
  int seconds;
  cout << "Number of seconds: ";
  cin >> seconds;
  div_t hours = calculateHours(seconds);
  seconds = hours.rem;

  div_t minutes = calculateMinutes(seconds);
  seconds = minutes.rem;

  cout << "Hours: " << hours.quot << endl;
  cout << "Minutes: " << minutes.quot << endl;
  cout << "Seconds: " << seconds << endl;

  return 0;
}