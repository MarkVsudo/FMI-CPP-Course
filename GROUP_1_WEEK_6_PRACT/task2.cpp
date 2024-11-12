// Task 2 - Transport
// Студент трябва да пропътува n километра. Той има избор измежду три вида транспорт:

// Такси. Начална такса: 0.70 лв. Дневна тарифа: 0.79 лв./км. Нощна тарифа: 0.90 лв./км.
// Автобус. Дневна / нощна тарифа: 0.09 лв./км. Може да се използва за разстояния минимум 20 км.
// Влак. Дневна / нощна тарифа: 0.06 лв./км. Може да се използва за разстояния минимум 100 км.
// Напишете програма, която въвежда броя километри n и период от деня (ден или нощ) и изчислява цената на най-евтиния транспорт.

// Входни данни От конзолата се четат два реда:

// Първият ред съдържа числото n – брой километри – цяло число в интервала [1 … 5000].
// Вторият ред съдържа число 1 или 0 пътуване през деня или през нощта.
// Примери:

// Вход:   Изход:
// 5       4.65
// 1
// Вход:   Изход:
// 7       7
// 0
// Вход:   Изход:
// 25      2.25
// 1
// Вход:   Изход:
// 180     10.8
// 0

#include <iostream>

using namespace std;

double calculateTaxiPrice(int n, bool dayTime)
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

double calculateCheapestPrice(int n, bool dayTime)
{
    double cheapestPrice;

    if (n < 20)
    {
        cheapestPrice = calculateTaxiPrice(n, dayTime);
    }
    else if (n >= 20 && n < 100)
    {
        cheapestPrice = calculateBusPrice(n);
    }
    else
    {
        cheapestPrice = calculateTrainPrice(n);
    }

    return cheapestPrice;
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

    double cheapestPrice = calculateCheapestPrice(n, dayTime);

    cout << "Cheapest price: " << cheapestPrice << endl;

    return 0;
}
