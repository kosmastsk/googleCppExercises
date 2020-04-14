// ui.cpp, Kosmas Tsiakas
// Description: Interface for handling the database

#include <iostream>
#include "Database.h"
using namespace std;

int main()
{
  Database db;

  int choice;
  do
  {
    std::cout << "Composer Database" << endl;
    std::cout << "---------------------------------------------" << endl;

    std::cout << "1) Add a new composer" << endl;
    std::cout << "2) Retrieve a composer's data" << endl;
    std::cout << "3) Promote/demote a composer's rank" << endl;
    std::cout << "4) List all composers" << endl;
    std::cout << "5) List all composers by rank" << endl;
    std::cout << "0) Quit" << endl;

    cin >> choice;
    switch (choice)
    {
    case 1:
    {
      Composer &comp1 = db.AddComposer("Ludwig van", "Beethoven", "Romantic", 1770,
                                       "Beethoven was completely deaf during the latter part of his life - he never "
                                       "heard a performance of his 9th symphony.");
      break;
    }
    case 2:
    {
      db.GetComposer("Beethoven").Display();
      break;
    }
    case 3:
    {
      db.GetComposer("Beethoven").Promote(1);
      if (db.GetComposer("Beethoven").ranking() < 0 || db.GetComposer("Beethoven").ranking() > 10)
      {
        cout << "Ranking is out of range. Please try again." << endl;
      }
      break;
    }
    case 4:
    {
      db.DisplayAll();
      break;
    }
    case 5:
    {
      db.DisplayByRank();
      break;
    }
    case 0:
    {
      exit(0);
      break;
    }
    }
  } while (choice != 0);

  return 0;
}