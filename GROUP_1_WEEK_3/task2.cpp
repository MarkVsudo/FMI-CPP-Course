// Да се напише програма, която след въвеждане на положително реално число го принтира, но със стойност 0.5 по - малко докато числото не стане по - малко от 0 Примерен изход при вход 10 : 9.5 9 8.5 8 ....1 0.5

#include <iostream>
using namespace std;

int main()
{
  double number;

  cout << "Enter a positive number: ";
  cin >> number;

  if (number <= 0)
  {
    cout << "Please enter a positive number!";
    return 1;
  }

  while (number > 0)
  {
    number -= 0.5;
    cout << number << " ";
  }

  return 0;
}
