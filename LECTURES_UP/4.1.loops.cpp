#include <iostream>
using namespace std;

int main()
{
    // Факториел:
/*
    int number;
    cin >> number;

    int factorial = 1;
    for (int i = 2; i <= number; i = i + 1)
        factorial = factorial * i;

    cout << number << "! = " << factorial << endl;
*/

    // Задача. Да се намери броят на всички 3-цифрени положителни числа,
    // които съдържат поне 2 различни цифри:
/*
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;

        if (firstDigit != secondDigit || secondDigit != thirdDigit
            || thirdDigit != firstDigit)
        {
            count++;
        }
    }

    cout << count << endl;
*/

    // Сумата от четните и произведението на
    // нечетните числа, принадлежащи на
    // интервала [a, b], където a и b са дадени цели
    // числа (a < b)
/*
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int product = 1;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            sum += i; // или sum = sum + i;
        else
            product *= i;
    }

    cout << "Sum of evens: " << sum << endl
        << "Product of odds: " << product << endl;
*/

/*
    // Да се намерят първите n + 1 члена на рекурентната редица... (от презентацията)
    int n;
    cin >> n;

    double a = 1.0;
    cout << a << " ";
    for (int i = 1; i <= n; i++)
    {
        a = i * a + 1.0 / i; // да си спомним - ако беше 1 / i, ще имаме целочислено деление!
        cout << a << " ";
    }
    cout << endl;
*/

/*
    // Факториел, този път с while:
    int number;
    cin >> number;
    int factorial = 1;

    int i = 2;
    while (i <= number)
    {
        factorial *= i;
        i++;
    }
    cout << number << "! = " << factorial << endl;
*/

    // Брой цифри на цяло положително число (в 10-ична бройна система):
/*
    int number;
    cin >> number;

    int digits = 0;
    while (number != 0)
    {
        number /= 10; // целочислено деление - изхвърляме последната цифра
        digits++;
    }

    cout << digits << endl;
*/

/*
    // Сума от цифрите на цяло положително число
    int number;
    cin >> number;

    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    cout << sum << endl;
*/

    // Брой срещания на дадена цифра в записа на число:
/*
    int number, digit;
    cout << "Number: ";
    cin >> number;
    cout << "Digit: ";
    cin >> digit;

    int count = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
            count++;

        number /= 10;
    }

    cout << count << endl;
*/

/*
    // Най-малката цифра на дадено число:
    int number;
    cin >> number;

    int min = number % 10; // за начало приемаме, че последната цифра е най-малката
    number /= 10;
    while (number != 0)
    {
        int currentDigit = number % 10;
        if (currentDigit < min)
            min = currentDigit;

        number /= 10;
    }
    cout << min << endl;
*/

    // Факториел с do-while:
/*
    int number;
    cin >> number;
    int factorial = 1;
    int i = 1;
    do
    {
        factorial *= i;
        i++;
    }
    while (i <= number);
    cout << factorial << endl;
*/

    // Въвеждане на стойност от потребителя с
    // проверка за коректност – ако потребителят
    // въведе грешна стойност, да бъде подканян
    // да я въведе отново, докато не стане
    // коректна
/*
    int month;
    do
    {
        cout << "Month: ";
        cin >> month;
    }
    while (month < 1 || month > 12); // тялото на цикъла се изпълнява, докато стойността на month е невалидна
    cout << "You entered: " << month << endl;
*/
    // 2-и начин:
/*
    int month;
    cout << "Month: ";
    cin >> month;
    while (month < 1 || month > 12)
    {
        cout << "Invalid value. Please enter a number between 1 and 12: ";
        cin >> month;
    }
*/

    // Задача: да преобразуваме всеки от следните
    // три оператора в останалите два и да видим, че
    // може да се получи по-труден за четене код:

    int k;
    // for (k = 0; k < 10; k++) cout << k;
/*
    k = 0;
    while (k < 10)
    {
        cout << k;
        k++;
    }
*/
/*
    k = 0;
    do
    {
        cout << k;
        k++;
    }
    while (k < 10);
*/

    //do cin >> k; while (k < 1 || k > 10);
/*
    cin >> k;
    while (k < 1 || k > 10)
        cin >> k;
*/
/*
    cin >> k;
    for (; k < 1 || k > 10;)
        cin >> k;
*/

    // while (k > 5) k = k - 5;
    // for (; k > 5; ) k = k - 5;
/*
    if (k > 5)
    {
        do
            k = k - 5;
        while (k > 5);
    }
*/

    // Задача. Да се намери броят на цифрите в десетичния запис
    // на дадено естествено число (включително и 0), които са по-големи от
    // средното аритметично на цифрите.
/*
    int number;
    cin >> number;

    int sum = 0;
    int count = 0;
    int numberCopy = number;
    do
    {
        sum += numberCopy % 10;
        count++;
        numberCopy /= 10;
    }
    while (numberCopy); // numberCopy != 0

    double avg = (double) sum / count;

    int result = 0;
    numberCopy = number;
    do
    {
        if (numberCopy % 10 > avg)
            result++;
        numberCopy /= 10;
    }
    while (numberCopy);

    cout << result << endl;
*/

    // Таблица за умножение:
/*
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++) // с този цикъл отпечатваме числата в един конкретен ред
        {
            if (i * j < 10) cout << " "; // за красота
            cout << i * j << " ";
        }
        cout << endl;
    }
*/

    // Сума от факториелите на числата от 1 до n
    // Вариант 1 - с вложени цикли:
/*
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        // намираме i!
        int factorial = 1;
        for (int j = 2; j <= i; j++)
            factorial *= j;
        sum += factorial;
    }
    cout << sum << endl;
*/
    // Вариант 2 - оптимизиран, без вложени цикли:
/*
    int n;
    cin >> n;
    int sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += factorial;
    }
    cout << sum << endl;
*/

    // Да се намери сумата на квадратите на всички четни числа в [a, b]
    // (a, b - цели)

    // Вариант 1 - не е най-хубав, но става:
/*
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
        if (i % 2 == 0)
            sum += i * i;
*/
    // Вариант 2 - по-ефективен:
/*
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int start = a % 2 == 0 ? a : a + 1;
    for (int i = start; i <= b; i += 2)
        sum += i * i;

    cout << sum << endl;
*/

    return 0;
}

