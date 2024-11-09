// Task 4 - Степен ли е?

// Дадено е едно число n. Проверете дали то е степен на двойката. Ако е, изведете YES, а ако не е - NO.

// Примери:

// Вход: 1

// Изход: YES

// Вход: 4

// Изход: YES

// Вход: 15

// Изход: NO

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
  while (n > 1)
  {
    if (n % 2 != 0)
      return false;

    n /= 2;
  }

  return true;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n <= 0)
    cout << "Enter a valid number!";
  else
    cout << (isPowerOfTwo(n) ? "YES" : "NO");

  return 0;
}
