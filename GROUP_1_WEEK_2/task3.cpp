// Да се въведе четирицифрено число и ако всички цифри са различни да се изведе на конзолата "YES" в противен случай "NO". Може да направите проверка дали числото е четирицифрено.

// Примерен изход при числото 1231 : NO, not all numbers are different!

// Примерен изход при числото 1234 : YES, all the numbers are different!

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter 4-digit number: ";
  cin >> num;

  int firstDigit = (num / 1000) % 10;
  int secondDigit = (num / 100) % 10;
  int thirdDigit = (num / 10) % 10;
  int fourthDigit = num % 10;

  cout << "First digit: " << firstDigit << endl;
  cout << "Second digit: " << secondDigit << endl;
  cout << "Third digit: " << thirdDigit << endl;
  cout << "Fourth digit: " << fourthDigit << endl;

  bool areAllDifferent = (firstDigit != secondDigit) &&
                         (firstDigit != thirdDigit) &&
                         (firstDigit != fourthDigit) &&
                         (secondDigit != thirdDigit) &&
                         (secondDigit != fourthDigit) &&
                         (thirdDigit != fourthDigit);

  if (areAllDifferent)
    cout << "YES, all the numbers are different!" << endl;
  else
    cout << "NO, not all numbers are different!" << endl;

  return 0;
}