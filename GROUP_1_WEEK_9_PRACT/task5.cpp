// Да се напише функция , която след приемане на аргументи два символни низа, залепва втория низ за първия.(Да се напише отделна функция, която намира дължините им).

// Примерен вход и изход при аргументи ala bala : alabala (След пускане на функцията ако принтираме първия низ трябва да изведе alabala)

#include <iostream>
using namespace std;

int findStringLength(char str[])
{
  int length = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    length++;
  }

  return length;
}

void combineStrings(char str1[], char str2[])
{
  int str1Length = findStringLength(str1);
  int str2Length = findStringLength(str2);

  for (int i = 0; i < str2Length; i++)
  {
    str1[str1Length + i] = str2[i];
  }

  str1[str1Length + str2Length] = '\0';

  for (int i = 0; str1[i] != '\0'; i++)
  {
    cout << str1[i];
  }
}

int main()
{
  char str1[100] = "ala";
  char str2[] = "bala";

  combineStrings(str1, str2);
  return 0;
}