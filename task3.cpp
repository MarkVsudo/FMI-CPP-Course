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