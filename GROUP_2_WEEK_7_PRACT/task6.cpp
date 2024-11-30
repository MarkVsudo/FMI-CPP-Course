// За въведен масив от символи, съдържащ максимално 100 символа, да се определи дали въведената последователност от символи е палиндром.

// Вход: 3
// y e s

// Изход: No

// Вход: 5

#include <iostream>
using namespace std;

void fillArray(char str[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "str[" << i << "] ";
    cin >> str[i];
  }
}

bool findPalindrome(char str[], int n)
{

  for (int i = 0; i < n / 2; i++)
  {
    if (str[i] != str[n - i - 1])
      return false;
  }

  return true;
}

int main()
{
  int n;
  char str[101];

  do
  {
    cout << "Enter a number (1-100): ";
    cin >> n;
  } while (n < 1 || n > 100);

  fillArray(str, n);

  cout << (findPalindrome(str, n) ? "Yes" : "No");

  return 0;
}