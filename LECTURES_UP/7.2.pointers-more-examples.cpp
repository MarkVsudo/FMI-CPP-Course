#include <iostream>
using namespace std;

// Напишете функция, която по даден масив от дробни
// числа и дадено естествено число k връща нов масив,
// съдържащ само тези числа, които се срещат поне k пъти.
bool checkIfContainsAtLeast(const double array[],
    int count, double value, int k)
{
    int occurrencesCount = 0;

    for (int i = 0; i < count && occurrencesCount < k; i++)
        if (array[i] == value)
            occurrencesCount++;

    return occurrencesCount >= k;
}
int removeRareElements(const double array[], int count, int k, double filtered[])
{
    int filteredCount = 0;

    for (int i = 0; i < count; i++)
    {
        if (checkIfContainsAtLeast(array, count, array[i], k))
        {
            filtered[filteredCount] = array[i];
            filteredCount++;
        }
    }

    return filteredCount;
}

// Функция, която по дадени:
// - матрица от реални числа с 3 стълба
// - едномерен масив от реални числа
// връща:
// - броя на елементите в матрицата, които са равни
// на сумата на елементите на масива
// - указател към първия такъв елемент (или NULL/nullptr, ако няма)
double *f(double matrix[][3], int rows,
    double array[], int count,
    int *result)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += array[i];

    *result = 0; // брой елементи, които са равни на сумата
    double *pointer = NULL;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == sum)
            {
                if (pointer == NULL)
                    pointer = &matrix[i][j];
                (*result)++;
            }

    return pointer;
}

int main()
{
    double m[2][3] = {{1.0, 2.5, 3.3}, {2.5, 0, -1.0}};
    double a[5] = {0.5, 0, 2, +1, -1};
    int count;
    double *p = f(m, 2, a, 5, &count);
    cout << count << endl;
    return 0;
}

