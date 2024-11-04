// От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.

// Пример:

// Вход: 5550

// Изход: 15

#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int sum = 0;

  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }

  cout << "Sum: " << sum << endl;

  return 0;
}