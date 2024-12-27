#include <iostream>

using namespace std;

// Допълнителен материал по УП

void test(int);
int indexOf(double [], int, bool (*)(double));
bool isNegative(double);

int main()
{
    // Ако не използваме enum:
    const int JANUARY = 1;
    const int FEBRUARY = 2;
    // ..., DECEMBER
    int month = FEBRUARY;
    if (month > JANUARY) {
        cout << "Yes" << endl;
    }
    // дотук добре, но:
    month = 48309258; // недопустима стойност
    int length = month; // компилира се

    // Ако използваме enum:
    enum Month {January = 1, February}; // ...
    Month currentMonth = January;
    // currentMonth = 48309258; // не се компилира :)
    length = currentMonth; // това се компилира под gcc
    cout << currentMonth << endl; // 1
    currentMonth = (Month) 2; // ако искаме да присвоим int

    // друг пример: enum Gender {Female, Male};

    // C++11 - отпада проблемът с неявното преобразуване до int, както и ограничението да нямаме константи с еднакви имена в различни енумерации:
    // enum class Color {RED, GREEN, BLUE};
    // Color color = Color::GREEN;



    // Указатели към функции
    // допълнителен материал - указатели към функции
    void (*fp)(int); // указател към функции от тип void,
                // които приемат един int параметър
    fp = test;//указателят вече сочи към конкретна ф-я
    fp(5); // извикваме функцията през указателя

    double array[] = {1.5, 0, 2.7, 1024, -3.5};
    int indexOfFirstNegative = indexOf(array, 5, isNegative);
    cout << indexOfFirstNegative << endl;

    // в C++ 11 има и по-хубав синтаксис, позволяващ да дефинираме isNegative директно при извикването на indexOf

    return 0;
}

void test(int number)
{
    cout << number << endl;
}
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

