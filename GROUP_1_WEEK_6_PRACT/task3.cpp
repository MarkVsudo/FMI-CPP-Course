// Task 3 - Wine
// От лозе с площ X квадратни метри се заделя 40% от реколтата за производство на вино. От 1 кв.м. лозе се изкарват Y килограма грозде. За 1 литър вино са нужни 2,5 кг. грозде. Желаното количество вино за продан е Z литра.

// Напишете програма, която пресмята колко вино може да се произведе и дали това количество е достатъчно. Ако е достатъчно, остатъкът се разделя по равно между работниците на лозето.

// Входни данни Входът се чете от конзолата и се състои от точно 4 реда:

// 1-ви ред: X кв.м е лозето – цяло число в интервала [10 … 5000].
// 2-ри ред: Y грозде за един кв.м. – реално число в интервала [0.00 … 10.00].
// 3-ти ред: Z нужни литри вино – цяло число в интервала [10 … 600].
// 4-ти ред: брой работници – цяло число в интервала [1 … 20].
// На конзолата трябва да се отпечата следното:

// Ако произведеното вино е по-малко от нужното:
// “It will be a tough winter! More {недостигащо вино} liters wine needed.”

// Ако произведеното вино е повече от нужното:
// “Good harvest this year! Total wine: {общо вино} liters.” “{Оставащо вино} liters left -> {вино за 1 работник} liters per person.”

// Примери:

// Вход:

// 650
// 2
// 175
// 3
// Изход:

// Good harvest this year! Total wine: 208 liters.
// 33 liters left -> 11 liters per person.
// Вход:

// 1020
// 1.5
// 425
// 4
// Изход:

// It will be a tough winter! More 180 liters wine needed.

#include <iostream>
#include <cmath>

using namespace std;

double calculateExtractedWine(int X, double Y)
{
    double areaForWine = X * 0.4;
    double greapsInTotal = areaForWine * Y;
    double extractedWine = greapsInTotal / 2.5;

    return extractedWine;
}

int main()
{
    int X, Z, workers;
    double Y;

    do
    {
        cout << "Enter area in sqm: ";
        cin >> X;
    } while (X < 10 || X > 5000);

    do
    {
        cout << "Enter grapes per sqm in kg: ";
        cin >> Y;
    } while (Y < 0.00 || Y > 10.00);

    do
    {
        cout << "Enter required wine in liters: ";
        cin >> Z;
    } while (Z < 10 || Z > 600);

    do
    {
        cout << "Enter amount of workers: ";
        cin >> workers;
    } while (workers < 1 || workers > 20);

    if (calculateExtractedWine(X, Y) < Z)
    {
        cout << "It will be a tough winter!" << endl;
        cout << "More " << floor(Z - calculateExtractedWine(X, Y)) << " liters wine needed." << endl;
    }
    else
    {
        cout << "Good harvest ths year!" << endl;
        cout << "Total wine: " << floor(calculateExtractedWine(X, Y)) << endl;
        cout << round(calculateExtractedWine(X, Y) - Z) << " liters left -> " << (calculateExtractedWine(X, Y) - Z) / workers << " per person" << endl;
    }

    return 0;
}