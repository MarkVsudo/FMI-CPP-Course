// Създайте програма, която представя на потребителя меню с опции, като изчисляване на площ, преобразуване на единици и извеждане на информация. Потребителят трябва да въведе число за своя избор, след което програмата ще изпълни съответната операция, използвайки условни оператори (switch или if-else). След изпълнението на избора, програмата завършва коректно.

// Бонус: Желателно е да повтаряте възможно най-малко код (променливи основно).

// Пример:

// При стартиране на програмата в терминала трябва да се покаже

// Menu:
// 1. Calculate Area
// 2. Convert Temperature
// 3. Display Information
// Enter your choice (1-3): _
// Избирате опция 2 за смятане на температура и след това излиза:

// Choose the type of conversion:
// 1. Miles to Kilometers
// 2. Fahrenheit to Celsius
// Enter your choice (1-2): _
// Избирате опция 1 и получавате:

// You chose option 1: Miles to Kilometers.

// Enter the distance in miles: 10
// Програмата завършва с:

// 10 miles is equal to 16.09 kilometers.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int mainOption;

  cout << "--- Menu ---\n"
       << "1. Calculate Area\n"
       << "2. Conversions\n"
       << "3. Display Information\n"
       << "Enter your choice (1-3): ";

  cin >> mainOption;

  switch (mainOption)
  {
  case 1:
    cout << "Option 1";
    break;
  case 2:
    int secondMenuOption;
    cout
        << "--- Choose the type of conversion: ---\n"
        << "1. Miles to Kilometers\n"
        << "2. Fahrenheit to Celsius\n "
        << "Enter your choice (1-2): ";
    cin >> secondMenuOption;
    if (secondMenuOption == 1)
    {
      int miles;
      cout << "You've selected option 1: Miles to Kilometers" << endl;
      cout << "Enter distance in miles: ";
      cin >> miles;
      int kmFromMiles = ceil(miles * 1.6);
      cout << miles << " Miles are " << kmFromMiles << " Kilometers";
    }
    else if (secondMenuOption == 2)
    {
      int fahrenheit;
      cout << "You've selected option 2: Fahrenheit to Celsius" << endl;
      cout << "Enter distance in miles: ";
      cin >> fahrenheit;
      int celciusFromFahrenheit = ceil((fahrenheit - 32) / 1.8);
      cout << fahrenheit << " Fahreheit is " << celciusFromFahrenheit << " Celcius";
    }
    else
    {
      cout << "Invalid option";
    }
    break;
  case 3:
    cout << "Option 3";
    break;
  default:
    cout << "Invalid option";
  }

  return 0;
}