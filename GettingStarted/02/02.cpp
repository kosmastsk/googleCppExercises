// 02.cpp: Kosmas Tsiakas
// Description: Calculate final grade for a course

#include <iostream>
using namespace std;

int receiveScore(string assignment)
{
  int score;
  cout << "Enter the score for the " << assignment << ". ";
  cin >> score;
  return score;
}

float calculateAssignments(int first, int second, int third, int fourth)
{
  return (first + second + third + fourth) / 4;
}

float calculateFinalGrade(int assignments, int midterm, int final, int section)
{
  return assignments * 0.4 + midterm * 0.15 + final * 0.35 + section * 0.1;
}

int main()
{
  int first, second, third, fourth, midterm, final, section;
  first = receiveScore("first assignment");
  second = receiveScore("second assignment");
  third = receiveScore("third assignment");
  fourth = receiveScore("fourth assignment");
  midterm = receiveScore("midterm");
  final = receiveScore("final");
  section = receiveScore("section grade");

  float assignments = calculateAssignments(first, second, third, fourth);

  float final_grade = calculateFinalGrade(assignments, midterm, final, section);

  cout << "The final grade is: " << final_grade << endl;

  return 0;
}