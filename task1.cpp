#include <iostream>
#include <cmath>

using namespace std;

int findAbs(int num)
{
    return abs(num);
}

int findPow(int num, int power)
{
    return pow(num, power);
}

int findMinTwoNums(int num1, int num2)
{
    int minNumber = (num1 + num2 - abs(num1 - num2)) / 2;

    return minNumber;
}

int findMaxTwoNums(int num1, int num2)
{
    int maxNumber = (num1 + num2 + abs(num1 - num2)) / 2;

    return maxNumber;
}

int findMinThreeNums(int num1, int num2, int num3)
{
    int minNumberCheck1 = (num1 - num2 + abs(num1 - num2)) / 2;
    int minNumberCheck2 = (minNumberCheck1 - num3 + abs(minNumberCheck1 - num3)) / 2;

    return minNumberCheck2;
}

int findMaxThreeNums(int num1, int num2, int num3)
{
    int maxNumberCheck1 = (num1 + num2 + abs(num1 - num2)) / 2;
    int maxNumberCheck2 = (maxNumberCheck1 + num3 + abs(maxNumberCheck1 - num3)) / 2;

    return maxNumberCheck2;
}

bool checkUpperCase(char letter)
{
    if (letter > 64 && letter < 91)
        return true;
    else
        return false;
}

bool checkLowerCase(char letter)
{
    if (letter > 96 && letter < 123)
        return true;
    else
        return false;
}

bool isLetter(char letter)
{
    if ((letter > 64 && letter < 91) || (letter > 96 && letter < 123))
        return true;
    else
        return false;
}

bool isDigit(char num)
{

    if (num > 47 && num < 58)
        return true;
    else
        return false;
}

int main()
{

    return 0;
}