// От клавиатурата се въвеждат произволен брой числа. Намерете сбора на всички числа до въвеждането на 0.

// Пример:

// Вход: 1 2 3 0

// Изход: 6

#include <iostream>
using namespace std;

int main()
{
  int number;
  int sum = 0;

  while (true)
  {
    cin >> number;

    if (number == 0)
    {
      break;
    }

    sum += number;
  }

  cout << "Sum: " << sum << endl;

  return 0;
}
