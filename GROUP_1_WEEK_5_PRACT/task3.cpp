// Task 3 - Сдвоени прости
// Да се напише функция, която по подадени две естествени числа, връща истина, ако са сдвоени прости. Числата A и B са сдвоени прости ако са прости и A + 2 = B. Проверката за просто число да се направи в отделна функция!

// Примерен изход при вход 11 13: True

// Примерен изход при вход 11 14 : False

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

bool checkPrimePair(int num1, int num2)
{
    int minNumber = (num1 < num2) ? num1 : num2;
    int maxNumber = (num1 > num2) ? num1 : num2;

    return (isPrime(num1) && isPrime(num2) && minNumber + 2 == maxNumber);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << (checkPrimePair(num1, num2) ? "True" : "False") << endl;

    return 0;
}
