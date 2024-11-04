// Да се напише функция, която пресмята n! за дадено n.

#include <iostream>
using namespace std;

int factorialCalc(int n)
{
  int factorial = 1;

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
  }

  return factorial;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n < 0)
  {
    cout << "Enter a natural number!";
    return 0;
  }

  cout << "Factorial of " << n << " is " << factorialCalc(n);

  return 0;
}