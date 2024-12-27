#include <iostream>
#include <cstring>
using namespace std;

// Зад. 2 - част
double sumEven(double **matrix, int rows, int columns)
{
    double sum = 0;
    for (int i = 0; i < rows; i += 2)
        for (int j = 0; j < columns; j++)
            sum += matrix[i][j];
    return sum;
}

// Зад. 3 - част
char *repeat(const char *word, int count)
{
    char *result = new char[strlen(word) * count + 1];
    strcpy(result, "");
    for (int i = 0; i < count; i++)
        strcat(result, word);

    return result;
}

int main()
{
    // Зад. 1
    int count;
    cin >> count; // ако искаме визуална демонстрация в pythontutor, не можем да използваме cin - може да зададем някаква произволна стойност, например count = 3 и после array[i] = i + 1; вместо cin >> array[i]
    double *array = new double[count];
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }
    
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += array[i];
    cout << sum / count << endl;
    
    delete [] array;


    // Зад. 2 - начало
    int rows = 2, columns = 3;
    double **matrix = new double*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new double[columns];
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j]; // ако искаме визуална демонстрация в pythontutor, не можем да използваме cin - може да зададем някаква произволна стойност, например matrix[i][j] = i + j;
    }
    
    cout << sumEven(matrix, rows, columns);
    
    for (int i = 0; i < rows; i++)
    {
        delete [] matrix[i];
    }
    delete [] matrix;


    // Зад. 3 - извикване на функцията
    const char word[] = "love";
    char *repeated = repeat(word, 3);
    cout << repeated << endl;
    delete [] repeated;


    return 0;
}

// Задача 1 - алтернативна версия, демонстрираща как може функция да върне масив, създаден в динамичната памет:
/*
double *readArray(int &count)
{
    cin >> count;

    double *array = new double[count];
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }

    return array; // ако беше указател към локална променлива в стековата памет, нямаше да е допустимо
}

double average(double *numbers, int count)
{
    if (count == 0)
    {
        return 0;
    }

    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += numbers[i];
    }
    return sum / count;
}

int main()
{
    int count;
    double *numbers = readArray(count);

    cout << average(numbers, count) << endl;

    delete [] numbers;
}
*/




