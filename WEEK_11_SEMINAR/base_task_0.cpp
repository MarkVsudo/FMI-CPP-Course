// Напишете функция, която по подаден низ, връща неговия размер. Името на функцията да е stringLength

#include <iostream>
using namespace std;

int stringLength(char *str)
{
  int length = 0;

  while (str[length] != '\0')
    length++;

  return length;
}

int main()
{

  cout << stringLength("hello");

  return 0;
}