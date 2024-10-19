// По въведена година да се провери дали е високосна

// Примерен изход при 2020: The year is leap

// Примерен изход при 2003: The year is not leap

// Примерен изход при 2000: The year is leap

// Примерен изход при 1900: The year is not leap

#include <iostream>
using namespace std;

int main()
{

  int year;
  cin >> year;
  bool y4 = year % 4 == 0,
       y100 = year % 100 == 0,
       y400 = year % 400 == 0;

  if (y4 && (y100 == y400))
    cout << "Leap" << endl;
  else
    cout << "Not leap" << endl;

  return 0;
}