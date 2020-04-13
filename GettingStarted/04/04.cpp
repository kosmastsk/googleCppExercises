// 04.cpp: Kosmas Tsiakas
// Description: Print a banner

#include <iostream>
using namespace std;

void printA()
{
  cout << endl;
  cout << "AAAAA" << endl;
  cout << "A   A" << endl;
  cout << "AAAAA" << endl;
  cout << "A   A" << endl;
  cout << "A   A" << endl;
}

int main()
{
  string phrase;
  cout << "Enter the phrase: " << endl;
  getline(cin, phrase);

  for (unsigned i = 0; i < phrase.length(); i++)
  {
    switch (phrase.at(i))
    {
    case 'A':
      printA();
      continue;
      // same thing goes on for the rest of the letter. No need to draw all of them right now :)
    }
  }

  return 0;
}