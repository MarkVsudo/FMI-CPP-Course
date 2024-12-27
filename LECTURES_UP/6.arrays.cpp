#include <iostream>

using namespace std;

int main()
{
    // Crash test: излизане извън границите на масива:
    int testArray[2];
    testArray[0] = testArray[1] = 15;
//    cout << testArray[1] << endl; // няма crash
//    cout << testArray[2] << endl; // грешка; получаваме някаква стойност
//    cout << testArray[99999999] << endl; // грешка; операционната система
            // ни наказва

    // Въвеждане от клавиатурата на масив с n стойности – дробни числа,
    // където 0<=n<=100
/*
    double numbers[100];
    int count; // Допълнителна променлива за реалния брой елементи
    cin >> count;
    for (int i = 0; i < count; i++)
        cin >> numbers[i];

    // Отпечатване на въведения масив
    for (int i = 0; i < count; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // Копиране на масив
    double numbersCopy[100];
    int countCopy;
    countCopy = count;
    for (int i = 0; i < count; i++)
        numbersCopy[i] = numbers[i];

    // Проверка дали два масива имат едни и същи елементи
    bool equal = true; // на практика решаваме задача "за всяко"
    if (count != countCopy)
        equal = false;
    else
        for (int i = 0; i < count && equal; i++)
            if (numbers[i] != numbersCopy[i])
                equal = false;
    cout << (equal ? "Equal" : "Not equal") << endl;
*/

    // За да не губим време да въвеждаме масива при всяко пускане на програмата,
    // можем да укажем стойностите направо в кода.
    double array[10] = {-1.5, 0, 3.14, 2.7, 3.14};
    int length = 5;

/*
    // Сума на елементите на масив
    double sum = 0;
    for (int i = 0; i < length; i++)
        sum += array[i];
    cout << "Sum: " << sum << endl;

    // Сума само на положителните елементи
    double sumPositives = 0;
    for (int i = 0; i < length; i++)
        if (array[i] > 0)
            sumPositives += array[i];
    cout << "Sum of positive elements: " << sumPositives << endl;
*/

    // Да се провери дали масивът съдържа отрицателен елемент
/*
    bool hasNegative = false;
    for (int i = 0; i < length && !hasNegative; i++)
        if (array[i] < 0)
            hasNegative = true;
    cout << (hasNegative ? "Yes" : "No") << endl;
    // Да се провери дали всички елементи в масива са неотрицателни
    cout << (hasNegative ? "No" : "Yes") << endl;
*/

    // Да се намери индексът, на който се намира елемент с дадена стойност.
    // Ако не се намери такъв, да се отпечата -1. Ако се съдържа на
    // няколко места, да се намери първото срещане
/*
    int index = -1;
    double x = 3.14; // това е стойността, която търсим
    for (int i = 0; i < length && index < 0; i++)
        if (array[i] == x)
            index = i;
    cout << index << endl;
*/
    // Втори вариант: последното срещане
    /*
    int index = -1;
    double x = 3.14; // това е стойността, която търсим
    for (int i = length - 1; i >= 0 && index < 0; i--)
        if (array[i] == x)
            index = i;
    cout << index << endl;
*/

    // Да се изтрие елемент от масив по зададен индекс (елементите след
    // него да се избутат наляво)
/*
    int index = 2; // това е индексът на елемента, който ще бъде изтрит
    for (int i = index; i < length - 1; i++)
        array[i] = array[i + 1];
    length--;

    // Нека проверим какво сме направили:
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
*/

    // Да се вмъкне елемент на указана позиция
/*
    int index = 2; // това е позицията, на която ще добавим новия елемент
    double value = -35.5; // това е стойността, която ще вмъкнем
    // Грешно решение:
//    for (int i = index; i < length; i++)
//        array[i + 1] = array[i];
//    array[index] = value;
//    length++;
    // Вярно решение:
    for (int i = length - 1; i >= index; i--) // трябва да обхождаме наляво!
        array[i + 1] = array[i];
    array[index] = value;
    length++;

    // Нека проверим какво сме направили:
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
    cout << endl;
*/

    // Да се намерят стойността и индексът на минималния елемент
/*
    int minIndex = 0; // обявяваме първия елемент за минимален
    for (int i = 1; i < length; i++) // прескачаме първия елемент -
        // няма нужда да го сравняваме със себе си
        if (array[i] < array[minIndex])
            minIndex = i;
    cout << "Index: " << minIndex << ", value: " << array[minIndex] << endl;
*/

    // Да се сортира масивът
/*
    for (int i = 0; i < length - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        double temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
    // Нека проверим какво сме направили:
    for (int i = 0; i < length; i++)
        cout << array[i] << " ";
*/


    // Двумерни масиви:

    // въвеждане на матрица:
/*
    double matrix[2][3];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    // извеждане на матрица:
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
*/

/*
    // Намиране дали има еднакви стълбове:
    const int ROWS = 2;
    const int COLUMNS = 3;
    double matrix[ROWS][COLUMNS] = {{1, 2, 1}, {3, 3, 3}};
    bool found = false;
    // с първите два цикъла обхождаме всички възможни комбинации от два стълба (без повторение)
    for (int j = 0; j < COLUMNS - 1 && !found; j++)
    {
        for (int k = j + 1; k < COLUMNS && !found; k++)
        {
            // да проверим дали j-тият стълб е еднакъв с k-тия стълб:
            bool equal = true;
            for (int i = 0; i < ROWS && equal; i++)
            {
                if (matrix[i][j] != matrix[i][k])
                {
                    equal = false;
                }
            }
            if (equal)
            {
                found = true;
            }
        }
    }
    cout << found << endl;
*/

/*
    // Транспониране на квадратна матрица:
    const int MATRIX_SIZE = 4;
    int matrix[MATRIX_SIZE][MATRIX_SIZE] =
        {{1, -2, 3, -4}, {5, 6}, {99}, {13, 14, 15, 16}};

    // трябва да обходим само елементите, които се намират над главния диагонал (без него)
    for (int i = 0; i < MATRIX_SIZE - 1; i++)
        for (int j = i + 1; j < MATRIX_SIZE; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }

    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
*/

/*
    // обхождане на елементи над главния диагонал, включително и него
    for (int i = 0; i < MATRIX_SIZE; i++)
        for (int j = i; j < MATRIX_SIZE; j++)
            cout << matrix[i][j] << " ";
    cout << endl;

    // обхождане на елементи под главния диагонал
    for (int i = 0; i < MATRIX_SIZE; i++)
        for (int j = i - 1; j >= 0; j--)
            cout << matrix[i][j] << " ";
    cout << endl;

    // обхождане на елементи под главния диагонал
    // по редове, всеки ред отляво надясно
    for (int i = 1; i < MATRIX_SIZE; i++)
        for (int j = 0; j < i; j++)
            cout << matrix[i][j] << " ";
    cout << endl;

    // обхождане на елементи над вторичния диагонал
    // по редове, всеки ред отляво надясно
    for (int i = 0; i < MATRIX_SIZE - 1; i++)
        for (int j = 0; i + j < MATRIX_SIZE - 1; j++)
            cout << matrix[i][j] << " ";
    cout << endl;

    // само вторичния диагонал в посока надолу:
    for (int i = 0; i < MATRIX_SIZE; i++)
        cout << matrix[i][MATRIX_SIZE - 1 - i] << " ";
    cout << endl;
*/

    // други обхождания на квадратна матрица:
    // всички елементи под втория диагонал (включително
    // и него), по стълбове в посока нагоре,
    // започвайки от най-десния стълб
/*
    for (int j = MATRIX_SIZE - 1; j >= 0; j--)
        for (int i = MATRIX_SIZE - 1;
                i + j >= MATRIX_SIZE - 1; i--)
            cout << matrix[i][j] << " ";
*/
    // матрицата беше транспонирана преди това, затова
    // се получи странен резултат :)


    // Задача.
    // Даден е масив от цели неотрицателни числа.
    // Да се създаде нов масив, който съдържа
    // в обратен ред всички елементи на първия, които
    // съдържат само нечетни цифри.
    // Пример: {23, 173, 51, 0, 99} -> {99, 51, 173}
/*
    const int MAX = 5;

    int count = MAX;
    int array[MAX] = {23, 173, 51, 0, 99};

    int filtered[MAX];
    int filteredCount = 0;

    for (int i = count - 1; i >= 0; i--)
    {
        bool allNegative = true;
        int currentNumber = array[i];
        do
        {
            if (currentNumber % 2 == 0)
                allNegative = false;
            currentNumber /= 10;
        }
        while (currentNumber != 0 && allNegative);

        if (allNegative)
        {
            filtered[filteredCount] = array[i];
            filteredCount++;
        }
    }

    for (int i = 0; i < filteredCount; i++)
        cout << filtered[i] << endl;
*/

    return 0;
}
