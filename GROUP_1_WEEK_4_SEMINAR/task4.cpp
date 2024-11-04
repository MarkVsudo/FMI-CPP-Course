// Напишете функция, която обръща подадено число

// Вход: 12345
// Изход: 54321

#include <iostream>
using namespace std;

int reverseNumber(int num)
{
  int reversed = 0;

  while (num != 0)
  {
    int lastDigit = num % 10;
    reversed = reversed * 10 + lastDigit;
    num /= 10;
  }

  return reversed;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  cout << "Reversed number: " << reverseNumber(num);

  return 0;
}
