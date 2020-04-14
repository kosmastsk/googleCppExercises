// Database.cpp Kosmas Tsiakas
// Description: A database of composer records

#include <iostream>
#include "Database.h"

using namespace std;

Database::Database()
{
  next_slot_ = 0;
}

Database::~Database()
{
}

Composer &Database::AddComposer(string in_first_name, string in_last_name,
                                string in_genre, int in_yob, string in_fact)
{
  Composer composer;
  composer.set_first_name(in_first_name);
  composer.set_last_name(in_last_name);
  composer.set_composer_genre(in_genre);
  composer.set_composer_yob(in_yob);
  composer.set_fact(in_fact);
  composer.set_ranking(0);

  if (next_slot_ < 100)
  {
    composers_[next_slot_] = composer;
    next_slot_++;
  }
  else
  {
    cout << "There are already 100 composers in the database. Entry skipped" << endl;
    exit(1);
  }
  return composer;
}

Composer &Database::GetComposer(string in_last_name)
{
  int i;
  for (i = 0; i < next_slot_; i++)
  {
    if (composers_[i].last_name() == in_last_name)
      break;
  }
  return composers_[i];
}

void Database::DisplayAll()
{
  for (int i = 0; i < next_slot_; i++)
  {
    composers_[i].Display();
  }
}

void Database::DisplayByRank()
{
  int min;
  Composer temp;
  // Sort
  for (int i = 0; i < next_slot_ - 1; i++)
  {
    min = i;
    for (int j = i + 1; j < next_slot_; j++)
    {
      if (composers_[j].ranking() < composers_[min].ranking())
        min = j;
    }
    temp = composers_[i];
    composers_[i] = composers_[min];
    composers_[min] = temp;
  }

  //Display
  for (int i = next_slot_ - 1; i >= 0; i--)
  {
    composers_[i].Display();
  }
}