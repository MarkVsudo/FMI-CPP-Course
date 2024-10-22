/*
  1. Пресметнете периметъра и лицето на триъгълник със страни 10, 7, 6.5.
    1.1. Въвеждайте трите страни от стандартния вход. Приемете засега, че всеки триъгълник, който въвеждате, е валиден (сборът на всеки 2 страни да е по-голям от третата).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a = 10, b = 6, c = 6.5;

  double semiPerimeter = (a + b + c) / 2;
  double area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));

  cout << "Area of triangle is: " << area << endl;

  return 0;
}