// По дадено естествено число определете дали то е просто.

#include <iostream>
using namespace std;

bool primeNumber(unsigned int num)
{
  if (num <= 1)
    return false;

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int num;
  cout << "Enter a natural number: ";
  cin >> num;

  if (num < 0)
  {
    cout << "Enter a valid number!";
    return 0;
  }

  cout << (primeNumber(num) ? "Prime" : "Not prime");

  return 0;
}
