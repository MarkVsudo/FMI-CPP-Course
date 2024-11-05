#include <iostream>
using namespace std;

int checkOccurrences(int num1, int num2)
{
    int countOccurrences = 0;

    while (num1 != 0)
    {
        int lastDigit = num1 % 10;
        if (lastDigit == num2)
        {
            countOccurrences++;
        }
        num1 /= 10;
    }

    return countOccurrences;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > 100 && (num2 < 10 && num2 >= 0))
        cout << checkOccurrences(num1, num2);
    else
        cout << "Enter valid numbers!";

    return 0;
}