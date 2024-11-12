#include <iostream>

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

    cout << "Required tiles: " << requiredTiles << "\n"
         << "Total time: " << totalTime;

    return 0;
}