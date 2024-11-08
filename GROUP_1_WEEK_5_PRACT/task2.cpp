// Task 2 - Цифра в число
// Да се напише функция, която по подадени два параметъра от целочислен тип проверява колко пъти цифрата се среща в числото.

// Първият параметър е число > 100, вторият - цифра.

#include <iostream>
using namespace std;

int checkOccurrences(int num1, int num2)
{
    int countOccurrences = 0;

    while (num1 != 0)
    {
        int lastDigit = num1 % 10;

        if (lastDigit == num2)
            countOccurrences++;

        num1 /= 10;
    }

    return countOccurrences;
}

int main()
{
    int num1, num2;
    cout << "Enter a number >100 and a digit 0-9: ";
    cin >> num1 >> num2;

    if (num1 > 100 && num2 >= 0 && num2 < 10)
        cout << checkOccurrences(num1, num2) << endl;
    else
        cout << "Enter valid numbers!" << endl;

    return 0;
}
