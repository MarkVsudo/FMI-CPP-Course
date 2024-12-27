#include <iostream>
#include <cmath>
using namespace std;

// Цел на заниманието: да видим как да преобразуваме задача от вида "Да се напише програма..." до задача от вида "Да се напише функция...".
// Първо вижте решението в main функцията, след това вижте и функцията averageOfSquareRoots

// Да се напише функция, която
// по дадени две реални числа намира средното
// аритметично на техните квадратни корени.
// Ако някое от числата е отрицателно,
// функцията да връща 0.
double averageOfSquareRoots(double a, double b)
{
    if (a >=0 && b >= 0)
    {
        return (sqrt(a) + sqrt(b)) / 2;
    }
    else
    {
        return 0;
    }
}

// Втори пример, вече само с функции:
// Да се напише функция, която проверява дали
// в даден затворен интервал от естествени числа
// се съдържа число, чиито цифри образуват аритметична
// прогресия.
bool isProgression(int number)
{
    if (number < 100)
        return true;

    int difference = number % 10 - number / 10 % 10;

    number /= 10;
    while (number >= 10)
    {
        int currentDifference =
            number % 10 - number / 10 % 10;

        if (difference != currentDifference)
            return false;

        number /= 10;
    }
    return true;
}

bool check(int start, int end)
{
    for (int i = start; i <= end; i++)
        if (isProgression(i))
            return true;
    return false;
}



int main()
{

    // Да се напише програма, която
    // по дадени две реални числа намира средното
    // аритметично на техните квадратни корени.
    // Ако някое от числата е отрицателно,
    // програмата да отпечатва 0.
/*
    double a, b;
    cin >> a >> b;
    if (a >=0 && b >= 0)
    {
        cout << (sqrt(a) + sqrt(b)) / 2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
*/
    // Тестване на функцията:
    double a, b;
    cin >> a >> b;
    cout << averageOfSquareRoots(a, b) << endl;

    //    cout << check(3576, 3578) << endl;
}

