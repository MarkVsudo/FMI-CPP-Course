// Task 3 - Bigger number
// Въведете две цели числа и изведете в конзолата по - голямото от двете (без if else проверка тъй като не е учено още :) )
// Примерен изход при въведени числа 10 и 15 : 15 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter two integers: ";
  cin >> a >> b;

  int maxNumber = (a + b + abs(a - b)) / 2;

  int minNumber = (a + b - abs(a - b)) / 2;

  cout << maxNumber << " " << minNumber << endl;

  return 0;
}
