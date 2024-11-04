// Напишете функция, която дава сумата на две подадени числа.

#include <iostream>
using namespace std;

int sumNumbers(int a, int b)
{
  return a + b;
}

int main()
{
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "Answer: " << sumNumbers(a, b);

  return 0;
}