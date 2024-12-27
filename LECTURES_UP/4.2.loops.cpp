#include <iostream>

using namespace std;

int main()
{
    // Задача за съществуване:

    // дали десетичният запис на цяло число n съдържа цифрата k
/*
    int number, digit;
    cin >> number >> digit;

    bool flag = false;
    do
    {
        if (number % 10 == digit)
            flag = true;
        number /= 10;
    }
    while (number != 0 && !flag);

    cout << (flag ? "Yes" : "No") << endl;
*/

    // Задачи "за всяко":

    // Проверка дали естествено число е просто
/*
    int number;
    cin >> number;
    bool isPrime = true;
    if (number <= 1)
        isPrime = false;
    else
        for (int i = 2; i * i <= number && isPrime; i++)
            if (number % i == 0)
                isPrime = false;
    cout << (isPrime ? "Prime" : "Not prime") << endl;
*/

    // Дали всички цифри на едно естествено число са еднакви:
/*
    int number;
    cin >> number;

    bool flag = true;
    // цикълът трябва да има с една стъпка по-малко,
    // отколкото е броят на цифрите
    while (number >= 10 && flag) // докато има поне две цифри!
    {
        if (number % 10 != number / 10 % 10) // последната цифра дали е различна от предпоследната
            flag = false;
        number /= 10;
    }

    cout << (flag ? "Equal" : "Not equal") << endl;
*/

    // Дали цифрите на едно естествено число образуват строго нарастваща редица:
/*
    int number;
    cin >> number;

    bool flag = true;
    while (number >= 10 && flag) // докато има поне две цифри!
    {
        if (number % 10 <= number / 10 % 10)
            flag = false;
        number /= 10;
    }

    cout << (flag ? "Yes" : "No") << endl;
*/

    // Дали число е палиндром:
/*
  int number;
  cin >> number;

  int left = 1;
  while (left <= number / 10)
  {
    left *= 10;
  }

  bool isPalindrome = true;
  int right = 1;
  while (left > right && isPalindrome)
  {
    if (number / left % 10 != number / right % 10)
    {
      isPalindrome = false;
    }
    left /= 10;
    right *= 10;
  }
    cout << number << " is palindrome: " << (isPalindrome ? "yes" : "no") << endl;
*/

    return 0;
}
