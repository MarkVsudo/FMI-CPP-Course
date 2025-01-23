// calculate factorial up to 'n' using recursive func
#include <iostream>
using namespace std;

int calcFactorial(int n)
{

  // Using for-loop
  /*
  int result = 1;

  for (int i = n; i >= 1; i--)
    result *= i;

  return result;
  */

  // Using recursion
  if (n == 0 || n == 1)
    return 1;
  return n * calcFactorial(n - 1);
}

int main()
{
  int n;

  do
  {
    cout << "Enter n >=0: ";
    cin >> n;
  } while (n < 0);

  cout << n << "! is: " << calcFactorial(n);

  return 0;
}