// По въведени координати на точка А, x и у (т.е А(x, y)) да се определи по координатна система в кой квадрант лежи.

// Примерен изход при x = 4 у = -3 : Forth.

// Примерен изход при x = 4 у = 3 : First.

// Примерен изход при x = -4 у = 3 : Second.

// Примерен изход при x = -4 у = -3 : Third.

// Примерен изход при x = 0 y = 10 : On axis.

#include <iostream>
using namespace std;

int main()
{
  int x, y;
  cout << "Enter values of x and y: ";
  cin >> x >> y;

  if (x > 0 && y > 0)
    cout << "First";
  else if (x < 0 && y > 0)
    cout << "Second";
  else if (x < 0 && y < 0)
    cout << "Third";
  else if (x > 0 && y < 0)
    cout << "Fourth";
  else if (x == 0 && y == 0)
    cout << "Center Point";
  else
    cout << "On axis";

  return 0;
}