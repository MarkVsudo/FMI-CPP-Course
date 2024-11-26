// Сума от факториелите на числата от 1 до n

#include <iostream>
using namespace std;

int calculateFactorial(int n)
{

  int result = 1;
  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }

  return result;
}

int calculateFactorialSum(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += calculateFactorial(i);
  }
  return sum;
}

int main()
{

  int n;

  do
  {
    cout << "Enter a number: ";
    cin >> n;
  } while (n < 0);

  cout << "Sum of factorials to n is: " << calculateFactorialSum(n);

  return 0;
}