// 01.cpp: Kosmas Tsiakas
// Description: Print temperature given the number of chirps

#include <iostream>
using namespace std;

int main()
{
  float chirps_per_minute; // Using float to include float results in the final temparature, without typecasting
  float temperature;
  cout << "Enter the number of chirps in a minute" << endl;
  cin >> chirps_per_minute;
  temperature = (40 + chirps_per_minute) / 4;

  cout << "Temperature: " << temperature << endl;
  return 0;
}