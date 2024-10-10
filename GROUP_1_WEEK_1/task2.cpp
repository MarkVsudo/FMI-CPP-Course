// Task 2 - Number swap
// Въведете две цели числа и разменете стойностите им (може да опитате без трета променлива :) )
// Примерен изход при въведени числа 10 и 15 : 15 10

#include <iostream>
using namespace std;

int main()
{

  int a, b;

  cout << "Enter two variables: ";
  cin >> a >> b;

  cout << "Variables before swapping: " << a << " " << b << endl;
  // Swap with third variable
  // int temp;
  // temp = a;
  // a = b;
  // b = temp;

  // Swap with arithmetic operations
  a = a + b; // a = 10 + 15 = 25
  b = a - b; // b = 25 - 15 = 10
  a = a - b; // a = 25 - 10 = 15

  cout << "Variables after swapping: " << a << " " << b;

  return 0;
}