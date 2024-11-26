#include <iostream>
using namespace std;

bool checkPrimeNumbers(int p, int q)
{
  if (p < 2 || q < 2)
  {
    return false;
  }

  for (int i = 2; i * i <= p; i++)
  {
    if (p % i == 0)
    {
      return false;
    }
  }

  for (int i = 2; i * i <= q; i++)
  {
    if (q % i == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int n;

  do
  {
    cout << "Enter a number from 1-100000: ";
    cin >> n;

  } while (n <= 0 || n >= 100000);

  for (int i = 0; i < n; i++)
  {
    int p = i, q = i + 2;
    if (checkPrimeNumbers(p, q))
    {
      cout << p << " " << q << endl;
    }
  }

  return 0;
}