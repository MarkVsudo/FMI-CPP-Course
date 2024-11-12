#include <iostream>

using namespace std;

double calculateTaxiPrice(bool dayTime, int n)
{
    return (dayTime == 1) ? 0.70 + 0.79 * n : 0.70 + 0.90 * n;
}

double calculateBusPrice(int n)
{
    return 0.09 * n;
}

double calculateTrainPrice(int n)
{
    return 0.06 * n;
}

int main()
{
    int n;

    do
    {
        cout << "Enter km count from 1 - 5000: ";
        cin >> n;
    } while (n < 1 || n > 5000);

    bool dayTime;
    cout << "Enter 1 for day time and 0 for night time: ";
    cin >> dayTime;

    double cheapestPrice;

    if (n < 20)
    {
        cheapestPrice = calculateTaxiPrice(dayTime, n);
    }
    else if (n >= 20 && n < 100)
    {
        cheapestPrice = calculateBusPrice(n);
    }
    else
    {
        cheapestPrice = calculateTrainPrice(n);
    }

    cout << "Cheapest price: " << cheapestPrice;

    return 0;
}