#include <iostream>

using namespace std;

// Фунция, която намира по-голямото от 2 цели числа
int max(int a, int b)
{
    return a > b ? a : b;
    // можеше и така:
/*
    if (a > b)
        return a;
    else
        return b;
*/
    // и дори така:
/*
    if (a > b)
        return a;
    return b;
*/

}

// Примерни задачи, които преди сме решавали без функции:

// Дали десетичният запис на цяло число n съдържа цифрата k
bool containsDigit(int number, int digit)
{
    // решаваме задача за съществуване
    bool flag = false;
    do
    {
        if (number % 10 == digit)
            flag = true;
        number /= 10;
    }
    while (number != 0 && !flag);

    return flag;
}
/*
или:
bool containsDigit(int number, int digit)
{
    do
    {
        if (number % 10 == digit)
            return true;
        number /= 10;
    }
    while (number != 0);

    return false;
}
*/

// Да се провери дали цифрите на дадено естествено число са различни.

// Решение без функции - кошмарно:
/*
    int number;
    cin >> number;
    bool flag = true;
    while (number >= 10 && flag) // докато има поне две цифри
    {
        // на всяка стъпка проверяваме дали
        // текущата цифра се съдържа сред цифрите,
        // които са наляво от нея

        int currentDigit = number % 10;
        int remainingDigits = number / 10;

        // Проверка дали currentDigit се съдържа в remainingDigits:
        bool exists = false;
        do
        {
            if (currentDigit == remainingDigits % 10)
                exists = true; // не е задължително да имаме втори флаг -
                            // може да използваме първия и да кажем flag = false
            remainingDigits /= 10;
        }
        while (remainingDigits && !exists);
        if (exists)
            flag = false;

        number /= 10;
    }
    cout << (flag ? "Yes" : "No") << endl;
*/

// Решение с функции:
bool areDigitsDifferent(int number)
{
    // решаваме задача "за всяко"
    bool flag = true;
    while (number >= 10 && flag) // докато има поне две цифри
    {
        // на всяка стъпка проверяваме дали
        // текущата цифра се съдържа сред цифрите,
        // които са наляво от нея

        int currentDigit = number % 10;
        int remainingDigits = number / 10;

        if (containsDigit(remainingDigits, currentDigit))
            flag = false;
        number /= 10;
    }
    return flag;
}

// глобална променлива:
int globalVariable;

// Лош пример - функция, която използва глобални променливи вместо параметри
// и върнати стойности:
void reverseDigits()
{
    int result = 0;
    while (globalVariable != 0)
    {
        result = result * 10 + globalVariable % 10;
        globalVariable /= 10;
    }
    globalVariable = result;
}

// пример със статична променлива:
void staticDemo()
{
    static int staticVariable = 0;
    staticVariable++;
    cout << "staticDemo was called for " << staticVariable << "th time." << endl;
}

int test(double, int); // декларация

int main()
{
    // Извикване на функцията max:

    int x, y;
    cin >> x >> y;
    cout << max(x, y) << endl;

    // Намиране на най-голямото измежду 3 цели числа:
    int z;
    cin >> z;
    cout << max(max(x, y), z) << endl;


    // Лош пример - използване на глобални променливи:
    globalVariable = 123;
    reverseDigits(); // изобщо не е очевидно, че се използва глобална променлива
    cout << globalVariable << endl;

    staticDemo();
    staticDemo();

    cout << test(3.14, 2);

    // тестване на някои от функциите, които сме написали (в стил Unit Tests):
    bool allTestsPassed = true;

    int testValue1 = max(4, 3);
    if (testValue1 != 4) {
        allTestsPassed = false;
        cout << "Fail: max(4, 3) returned " << testValue1 << endl;
    }

    int testValue2 = max(4, 4);
    if (testValue2 != 4) {
        allTestsPassed = false;
        cout << "Fail: max(4, 4) returned " << testValue2 << endl;
    }

    if (allTestsPassed) cout << "All tests successfully passed.";
    else cout << "Some test(s) failed.";
    cout << endl;

    return 0;
}

// понеже преди main сложихме декларация на функцията test, можем да я реализираме и след main
int test(double x, int i)
{
    return x * i * (x + i);
}
