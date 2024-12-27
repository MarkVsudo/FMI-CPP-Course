#include <iostream>
#include <cmath>

using namespace std;

// За да стартирате даден фрагмент, премахнете "/*" и "*/" около него.

int main()
{

    /*
        int width, height;
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;
        int area = width * height;
        cout << "Surface Area: " << area << endl;
    */

    /*
        // Да се напише програма, която по дадено реално число x изчислява израза от Демонстрация №1

        cout << "x = ";
        double x;
        cin >> x;

        double n = sqrt(2 * pow(x, 3) - 1) + sin(2 * x);
        double d = fabs(sin(x) + cos(x) * cos(x)) + 0.5;
        double f = n / d;

        cout << f << endl;
    */
    /*
        double x;
        cin >> x;

        double nominator = x / (2 * x - 1);
        double denominator = cos(x) * cos(x) / fabs(pow(x, 5) - 1);
        double result = sin(sqrt(nominator / denominator));

        cout << result;
    */

    /*
    Искаме да боядисаме стена, но не знаем колко кутии боя да купим
    Знаем:
    - размерите на стената в метри
    - колко грама се изразходват на кв. метър
    - колко кг е една кутия
    Трябва да предвидим 10% резерв
    */

    /*
        double width, height, boxWeight;
        int paintPerSqMeter;

        cout << "Wall dimensions in meters: ";
        cin >> width >> height;

        double area = width * height;

        cout << "Paint per square meter (gr): ";
        cin >> paintPerSqMeter;

        cout << "Box weight (kg): ";
        cin >> boxWeight;

        double paint = (area * paintPerSqMeter / 1000) * 1.1; // скобите не са задължителни - добавени са за четливост
        int result = ceil(paint / boxWeight);

        cout << "You have to buy " << result << " boxes.";
    */

    return 0;
}
