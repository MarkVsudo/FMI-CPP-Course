#include <iostream>

using namespace std;

void passByValue(int a)
{
    a = 10;
}

void passByAddress(int *a)
{
    *a = 10;
}

void passByReference(int &a)
{
    a = 15;
}

// примерът от лекциите, но с псевдоними:
void swap(double &a, double &b)
{
    double c = a;
    a = b;
    b = c;
}

void sort(double *array, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < count; j++)
            if (array[j] < array[minIndex])
                minIndex = j;
        swap(array[i], array[minIndex]);
    }
}

void printArray(const double array[], int count)
// или: double *array - абсолютно същото
// ГРЕШНО: printArray(double array[count])
{
    // cout << sizeof(array) << endl; // не ни върши работа - винаги връща 4
    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}

// нека искаме този път функция да върне указател към
// първия положителен елемент в даден масив (или NULL/nullptr)
const double *findFirstPositive(const double *array, int count)
{
    for (int i = 0; i < count; i++)
        if (array[i] > 0)
            return array + i;
    return NULL;
}


// Обобщение - справочник за писане на сигнатури на функции (т.е. как се подава масив на функция, как се връщат два int-а и т.н.)

// когато подаваме параметри на една функция, имаме
// три различни повода да го правим:
// - да подадем някаква стойност на функцията (входен
//   параметър)
// - да получим някаква стойност от функцията (изходен параметър)
// - да подадем някакъв обект (променлива, масив...)
//   и функцията да го промени (входно-изходен параметър)

int // връщане на една стойност от примитивен тип
summary(
        double d, // подаване на стойност от примитивен тип
                    // като входен параметър
        int &x, int &y, // връщане на една или повече стойности
                            // от примитивен тип
                // ИЛИ подаване на стойности от примитивен тип
                // като входно-изходни параметри
        const double array[], int count, // подаване
                // на масив като входен параметър
                // (можеше и double *array)
        double array2[], int count2, // подаване на масив
                // като входно-изходен параметър
                // АКО функцията ще променя дължината на масива,
                // подаваме int &count2
        double array3[], int &count3, // връщане на масив
        const double matrix[][5], int rows // подаване
                // на матрица с фиксиран брой СТЪЛБОВЕ като
                // входен параметър
        // аналогично входно-изходен параметър - без const
        // и т.н.
        ) {

    return 1;
}
// като пишем списъка с параметри, не трябва да слагаме
// излишни - напр. ако подаваме 2 масива, които гарантирано
// са с еднаква дължина, то няма смисъл и за 2-та да подаваме
// брой - достатъчно е веднъж

// Примерни декларации на функции
// 1. Функция, която проверява дали в даден масив от int
// съществува число, което принадлежи на [a, b]
// bool f1(int array[], int count, int a, int b)

// 2. Функция, която предсказва кои числа ще се паднат от
// тото 6 от 49 в тираж t.
// void f2(int t, int numbers[]) // знаем, че масивът е с 6
// елемента, затова не връщаме този брой

// 3. Функция, която по даден масив, показващ цената на акциите на
// Tesla Inc. през последните n месеца, предсказва
// каква е вероятността Elon Musk да се премести да живее на Марс
// (реално число между 0 и 100), както и колко ще струва
// това пътуване.
//void predict(double a[], int n, double &probability, double &price)
// OR:
//double predict(double a[], int n, double &price)


// леко допълнителен материал:
// подаване на матрица с произволен брой редове и стълбове
void printMatrix(const double *matrix, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << *(matrix + i * columns + j) << " ";
        cout << endl;
    }
}

/*
    // извикване:
    double testMatrix[2][3] = {-2, 3.14, 7.1, -8.01, 5, -9.9};
    printMatrix(*testMatrix, 2, 3); // подаваме единичен
    // указател към началото на матрица
    // можеше и &testMatrix[0][0]
*/

// Допълнителен материал:
// функция, която в даден масив от double
// намира индекса на първия елемент, който удовлетворява
// дадено условие, указано с булева функция
// (връща -1, ако не намери)
int indexOf(double array[], int count,
            bool (*pred)(double)) // указател към ф-я,
                        // която приема double стойност и
                        // връща true/false
{
    for (int i = 0; i < count; i++)
        if (pred(array[i]))
            return i;
    return -1;
}
bool isNegative(double value)
{
    return value < 0;
}


int main()
{
    int x = 7, y = 8;

    // указател към константа:
    const int* cp = &x;
    // *cp = 21; грешка
    cp = &y;

    // самият указател е константа (константен указател):
    int *const pc = &x;
    *pc = 21;
    // pc = &y; // грешка


    int b = 5;

    passByValue(b);
    cout << "Pass by value: " << b << endl; // 5

    passByAddress(&b);
    cout << "Pass by address: " << b << endl; // 10

    passByReference(b);
    cout << "Pass by reference: " << b << endl; // 15


    const int COUNT = 5;
    double array[] = {1.5, 0, 2.7, 1024, -3.5};

    cout << sizeof(array) << endl; // 40
    printArray(array, COUNT);
    // функцията няма как да разбере колко е дълъг масива,
    // понеже получава само адреса на първия елемент!
    // затова трябва да подадем и колко елемента да чете

    // трикчета:
    printArray(array, 3); // отпечатва първите 3 елемента
    printArray(array + 2, 3); // последните 3 елемента
    printArray(array + 1, 3); // вътрешни 3 елемента

    // понеже сме подали адреса на самия масив,
    // функцията може да прави промени по него:
    sort(array, COUNT);
    printArray(array, COUNT);

    // ако искаме функция да не може да променя подадения
    // й масив, правим параметърът й да бъде константен
    // указател (вж. printArray)


    const double *firstPositiveElement = findFirstPositive(array, COUNT);
    if (firstPositiveElement != NULL)
        cout << *firstPositiveElement << endl;


    // допълнителен материал - указатели към функции
    void (*fp)(int); // указател към функции от тип void,
                // които приемат един int параметър
    fp = passByValue;//указателят вече сочи към конкретна ф-я
    fp(5); // извикваме функцията през указателя

    int indexOfFirstNegative = indexOf(array, 5, isNegative);
    cout << indexOfFirstNegative << endl;

    return 0;
}

