// Напишете функция, която приема число и връща числото преобразувано в низ.

#include <iostream>

using namespace std;

char *convertNumToString(int num)
{
  int temp = num;
  int length = 0;

  if (temp != 0)
  {
    while (temp != 0)
    {
      temp /= 10;
      length++;
    }
  }
  else
  {
    length = 1;
  }

  char *stringArr = new char[length + 1];
  stringArr[length] = '\0';

  for (int i = length - 1; i >= 0; i--)
  {
    stringArr[i] = '0' + (num % 10);
    num /= 10;
  }

  return stringArr;
}

int main()
{
  int num;

  cout << "Enter a number: ";
  cin >> num;

  char *convertedNumber = convertNumToString(num);

  cout << "Converted string: " << convertedNumber << endl;

  delete[] convertedNumber;

  return 0;
}
