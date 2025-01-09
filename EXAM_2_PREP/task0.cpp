//  Да се реализира функция, която приема положително цяло число и го конвертира в символен низ.
//  Функцията връща указател към първия елемент на масива.

#include <iostream>
using namespace std;

int getNumberLength(int n)
{
  int length = 0;

  while (n != 0)
  {
    length++;
    n /= 10;
  }

  return length;
}

char *convertNumToStr(int n)
{
  int strLen = getNumberLength(n) + 1;
  char *str = new char[strLen];
  str[strLen - 1] = '\0';

  for (int i = strLen - 2; i >= 0; i--)
  {
    int lastInteger = n % 10;
    str[i] = '0' + lastInteger;
    n /= 10;
  }

  return str;
}

int main()
{
  int n;
  do
  {
    cout << "Enter a natural number: ";
    cin >> n;
  } while (n < 1);

  char *result = convertNumToStr(n);
  cout << "String: " << result;

  delete[] result;

  return 0;
}