// Напишете програма, която при подадена точка {x,y} проверява дали се намира върху някоя от страните на правоъгълник {x1,y1} - {x2,y2}. Входните данни се четат от конзолата и се състоят от 6 input-a (x1, y1, x2, y2 и точката x,y).

// Да се опечата Border, ако точката лежи на някоя от страниите / Inside / Outside в противен случай.

// Примерен вход: 2 -3 12 3 12 -1

// Изход: Border

#include <iostream>
using namespace std;

int main()
{
  int x1, y1, x2, y2, x, y;

  cout << "Enter rectangle points {x1, y1} and {x2, y2} and point {x, y} to find its location based on the rectangle: ";
  cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

  int minX = (x1 < x2) ? x1 : x2;
  int maxX = (x1 > x2) ? x1 : x2;
  int minY = (y1 < y2) ? y1 : y2;
  int maxY = (y1 > y2) ? y1 : y2;

  bool onYBorder = (x == minX || x == maxX) && (y >= minY && y <= maxY);
  bool onXBorder = (y == minY || y == maxY) && (x >= minX && x <= maxX);

  if (onYBorder || onXBorder)
  {
    cout << "Border" << endl;
  }
  else if (x > minX && x < maxX && y > minY && y < maxY)
  {
    cout << "Inside" << endl;
  }
  else
  {
    cout << "Outside" << endl;
  }

  return 0;
}
