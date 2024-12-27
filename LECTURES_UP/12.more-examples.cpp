#include <iostream>
#include <cmath>
using namespace std;

// Структура, представяща правоъгълник със страни,
// успоредни на координатните оси.

struct Rectangle
{
    double x1, y1, x2, y2;
};

// Функция, която по даден правоъгълник намира широчината му:
double width(Rectangle r)
{
    return fabs(r.x2 - r.x1);
}

// Функция, която по даден правоъгълник намира височината му:
double height(Rectangle r)
{
    return fabs(r.y2 - r.y1);
}

// Лице на правоъгълник:
double area(Rectangle r)
{
    return width(r) * height(r);
}

int main()
{
    Rectangle rectangle;
    cin >> rectangle.x1 >> rectangle.y1
        >> rectangle.x2 >> rectangle.y2;

    cout << area(rectangle) << endl;
}

