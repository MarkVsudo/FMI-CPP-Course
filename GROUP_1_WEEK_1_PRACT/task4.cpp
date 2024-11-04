// Task 4 - Трицифрени числа
// Да въведе трицифрено число, след което да се изведат на стандартния изход трите му цифри и сумата им.
// Примерен изход при числото 875 : 8 7 5 -> 20

#include <iostream>
using namespace std;

int main()
{

  int number;

  cin >> number;

  // 875/100 = 8.75, но можем да иползваме int, за да закръглим стойността до 8
  int firstNumber = number / 100;
  // 875 % 100 = 8 и остатък 75 / 10 = 7.5, но заради int се закръгля до 7
  int secondNumber = (number % 100) / 10;
  // 875 % 10 = 87 и остатък 5
  int thirdNumber = (number % 10);

  cout << "First number: " << firstNumber << endl;
  cout << "Second number: " << secondNumber << endl;
  cout << "Third number: " << thirdNumber << endl;

  int sum = firstNumber + secondNumber + thirdNumber;
  cout << "Sum of numbers: " << sum;

  return 0;
}