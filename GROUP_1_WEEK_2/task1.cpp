// Напишете прост калкулатор, поддържащ следните двуместни операции:

// Операция	Символ
// събиране	+
// изваждане	-
// умножение	*
// деление	/
// Входни данни
// операция – един от символите +, -, * или /
// операнди – две дробни числа от тип double
// Операцията и операндите се въвеждат от стандартния вход.

// Изходни данни
// резултатът от въведената операция над въведените операнди
// Резултатът се извежда на стандартния изход.

// Пример
// Вход: * 2 21
// Изход: 42

#include <iostream>
using namespace std;

int main()
{
  char symbol;
  double num1, num2;

  cout << "Please enter an operation (+, -, *, /): ";
  cin >> symbol;

  cout << "Please enter two numbers: ";
  cin >> num1 >> num2;

  switch (symbol)
  {
  case '+':
    cout << "Result: " << (num1 + num2) << endl;
    break;
  case '-':
    cout << "Result: " << (num1 - num2) << endl;
    break;
  case '*':
    cout << "Result: " << (num1 * num2) << endl;
    break;
  case '/':
    if (num2 != 0)
    {
      cout << "Result: " << (num1 / num2) << endl;
    }
    else
    {
      cout << "Error: Division by zero is undefined." << endl;
    }
    break;
  default:
    cout << "Invalid operation. Please enter one of (+, -, *, /)." << endl;
    break;
  }

  return 0;
}
