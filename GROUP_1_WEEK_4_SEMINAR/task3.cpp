// Напишете функция, която връща сбора на цифрите на подадено число.

#include <iostream>
using namespace std;

int calculateDigits(int num)
{
  int sum = 0;

  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }

  return sum;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Sum of number's digits is: " << calculateDigits(num);

  return 0;
}