// Task 1 - Playground
// На площадката пред жилищен блок трябва да се поставят плочки.

// Площадката е с форма на квадрат със страна N метра.
// Плочките са широки „W“ метра и дълги „L“ метра.
// На площадката има една пейка с ширина M метра и дължина O метра. Под нея не е нужно да се слагат плочки.
// Всяка плочка се поставя за 0.2 минути.
// Напишете програма, която чете от конзолата размерите на площадката, плочките и пейката и пресмята колко плочки са необходими да се покрие площадката и пресмята времето за поставяне на всички плочки.

// Пример: площадка с размер 20 м. има площ 400 кв.м.. Пейка, широка 1 м. и дълга 2 м., заема площ 2 кв.м. Една плочка е широка 5 м. и дълга 4 м. и има площ = 20 кв.м. Площта, която трябва да се покрие, е 400 – 2 = 398 кв.м. Необходими са 398 / 20 = 19.90 плочки. Необходимото време е 19.90 * 0.2 = 3.98 минути.

// Пример 1:

// Вход:   Изход:
// 20      19.9
// 5       3.98
// 4
// 1
// 2
// Обяснение към примера:

// Обща площ = 20 * 20 = 400.
// Площ на пейката = 1 * 2 = 2.
// Площ за покриване = 400 – 2 = 398.
// Площ на плочки = 5 * 4 = 20.
// Необходими плочки = 398 / 20 = 19.9.
// Необходимо време = 19.9 * 0.2 = 3.98.
// Пример 2:

// Вход:   Изход:
// 40      3302.08333333333
// 0.8     660.416666666667
// 0.6
// 3
// 5
// Бонус: закръглете финалния резултат до второто число след десетичния запис.

#include <iostream>
#include <cmath>

using namespace std;

double const timeForOneTile = 0.2;

double calculateRectangleArea(double a, double b)
{
    return a * b;
}

double calculateRequiredTiles(double playgroundArea, double benchArea, double tileArea)
{
    return (playgroundArea - benchArea) / tileArea;
}

double calculateTotalTime(double requiredTiles)
{
    return requiredTiles * timeForOneTile;
}

double roundToTwoDecimals(double value)
{
    return round(value * 100) / 100.00;
}

int main()
{

    double N, W, L, M, O;
    cout << "Enter playground side in meters: ";
    cin >> N;

    cout << "Enter width and length of tiles: ";
    cin >> W >> L;

    cout << "Enter width and length of bench: ";
    cin >> M >> O;

    double playgroundArea = calculateRectangleArea(N, N);
    double tileArea = calculateRectangleArea(W, L);
    double benchArea = calculateRectangleArea(M, O);

    double requiredTiles = calculateRequiredTiles(playgroundArea, benchArea, tileArea);

    double totalTime = calculateTotalTime(requiredTiles);

    cout << "Required tiles: " << roundToTwoDecimals(requiredTiles) << "\n"
         << "Total time: " << roundToTwoDecimals(totalTime);

    return 0;
}