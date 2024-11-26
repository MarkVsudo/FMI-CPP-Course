#include <iostream>
using namespace std;

int main()
{

  int year;
  cout << "Enter year: ";
  cin >> year;

  bool y4 = year % 4 == 0,
       y100 = year % 100 == 0,
       y400 = year % 400 == 0;

  if (y4 && (y100 == y400))
    cout << "Leap";
  else
    cout << "Not leap";

  return 0;
}