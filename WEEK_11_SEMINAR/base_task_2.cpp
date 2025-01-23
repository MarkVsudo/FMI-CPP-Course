// Напишете функция, която по подадени 2 низа, конкатенира втория низ към първия. Името на функцията да е stringConcat.

#include <iostream>
using namespace std;

int stringLength(char *str)
{
  int length = 0;

  while (str[length] != '\0')
    length++;

  return length;
}

void stringConcat(char *str1, char *str2)
{
  int str1Length = stringLength(str1);
  int str2Length = stringLength(str2);

  for (int i = 0; str2[i] != '\0'; i++)
  {
    str1[str1Length + i] = str2[i];
  }

  str1[str1Length + str2Length] = '\0';
}

int main()
{

  char str1[1024]{};

  stringConcat(str1, "hello");
  stringConcat(str1, ", world");
  stringConcat(str1, "!");

  cout << str1;

  return 0;
}
