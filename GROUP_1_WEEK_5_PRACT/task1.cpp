// Task 1 - Собствен cmath
// Напишете следните функции, като сами изберете правилният брой и тип на параметрите за всяка от тях:

// abs() - намира абсолютната стойност на цяло число.

// pow() - за дадени две числа - реално и цяло, връща първото на степен второто.

// min() - за дадени две числа, връща по-малкото

// max() - за дадени две числа, връща по-голямото

// minOfThree() - за дадени три числа, връща най-малкото

// maxOfThree() - за дадени три числа, връща най- голямото

// isUpper() - за даден символ връща истина ако той е главна буква и лъжа ако не е.

// isLower() - за даден символ връща истина ако той е малка буква и лъжа ако не е.

// isLetter() - за даден символ връща истина ако е буква.

// isDigit() - за даден символ връща истина ако е число.

#include <iostream>

using namespace std;

int findAbs(int num)
{
    return (num < 0) ? -num : num;
}

double findPow(double num, int power)
{
    double result = 1.0;

    for (int i = 1; i <= power; i++)
        result *= num;

    return result;
}

int findMinTwoNums(int num1, int num2)
{
    return (num1 < num2) ? num1 : num2;
}

int findMaxTwoNums(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int findMinThreeNums(int num1, int num2, int num3)
{
    int minNumber = (num1 < num2) ? num1 : num2;
    minNumber = (minNumber < num3) ? minNumber : num3;

    return minNumber;
}

int findMaxThreeNums(int num1, int num2, int num3)
{
    int maxNumber = (num1 > num2) ? num1 : num2;
    maxNumber = (maxNumber > num3) ? maxNumber : num3;

    return maxNumber;
}

bool checkUpperCase(char letter)
{
    return (letter >= 'A' && letter <= 'Z');
}

bool checkLowerCase(char letter)
{
    return (letter >= 'a' && letter <= 'z');
}

bool isLetter(char letter)
{
    return ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'));
}

bool isDigit(char num)
{
    return (num >= '0' && num <= '9');
}

int main()
{

    return 0;
}