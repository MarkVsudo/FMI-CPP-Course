// Да се напише програма, която въвежда от клавиатурата низ, с максимална дължина 60, и символ. Да се изведе колко пъти се среща символът в низа и ако се среща да го замести със символа *.

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

void printArray(char str[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "str[" << i << "] = " << str[i] << endl;
  }
}

void swapOccurrences(char str[], int n, char symbol)
{
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (str[i] == symbol)
    {
      count++;
      str[i] = '*';
    }
  }

  cout << "Occurrences of \'" << symbol << "\' : " << count << endl;

  printArray(str, n);
}

int main()
{
  int n;
  char str[61], symbol;

  do
  {
    cout << "Enter a number (1-60): ";
    cin >> n;
  } while (n < 1 || n > 60);

  cout << "Enter a symbol: ";
  cin >> symbol;

  fillArray(str, n);

  swapOccurrences(str, n, symbol);

  return 0;
}