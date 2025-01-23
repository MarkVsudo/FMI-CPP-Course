// Напишете функция, която копира съдържанието на един низ в друг. Името на функцията да е stringCopy.

#include <iostream>
using namespace std;

int stringLength(char *str)
{
  int length = 0;

  while (str[length] != '\0')
    length++;

  return length;
}

char *stringCopy(char *str)
{
  int oldStrLength = stringLength(str);
  char *newStr = new char[oldStrLength + 1];

  for (int i = 0; str[i] != '\0'; i++)
    newStr[i] = str[i];

  newStr[oldStrLength] = '\0';

  return newStr;
}

int main()
{

  char str[] = "hello";

  char *copiedStr = stringCopy(str);

  cout << copiedStr;

  delete[] copiedStr;

  return 0;
}