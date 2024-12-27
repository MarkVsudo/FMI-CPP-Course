#include <iostream>

using namespace std;

/*
Да се напише програма, която отпечатва всички двойки естествени числа
в даден интервал [a, b], за които a <= b и сумата от делителите на
a (без самото число) е равна на b.
*/

int sumOfDivisors(int number)
{
    int sum = 1;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        for (int j = i; j <= end; j++)
        {
            if (sumOfDivisors(i) == j)
            {
                cout << i << ", " << j << endl;
            }
        }
    }

    return 0;
}

