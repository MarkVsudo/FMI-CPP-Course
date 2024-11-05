#include <iostream>
using namespace std;

bool checkPrimeNums(int num1, int num2)
{
    if (num1 <= 1 || num2 <= 1)
        return false;

    for (int i = 2; i < num1; i++)
    {
        if (num1 % i == 0)
            return false;
    }

    for (int i = 2; i < num2; i++)
    {
        if (num2 % i == 0)
            return false;
    }

    return true;
}

bool checkPrimeConnection(int num1, int num2)
{
    int minNumber = (num1 + num2 - abs(num1 - num2)) / 2;
    int maxNumber = (num1 + num2 + abs(num1 - num2)) / 2;

    int leftSide = minNumber + 2;

    if (checkPrimeNums(num1, num2))
    {
        if (leftSide == maxNumber)
            return true;
        else
            return false;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter two prime numbers: ";
    cin >> num1 >> num2;

    cout << (checkPrimeConnection(num1, num2) ? "True" : "False");

    return 0;
}
