// По дадено естествено число определете дали то е просто.

// Пример:

// Вход: 8

// Изход: NO

// Вход: 7

// Изход: YES

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (num % 2 != 0)
    cout << "YES";
  else if (num == 0)
    cout << "0 is neither a prime nor an even number";
  else
    cout << "NO";

  return 0;
}