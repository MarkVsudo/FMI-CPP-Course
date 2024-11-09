// Task 3 - Лице на кръг

// Да се напише програма, която намира лице на кръг с даден радиус. За целта да се дефинира и използва подходяща функция.

#include <iostream>

using namespace std;

double const PI = 3.14;

double findCircleArea(double r)
{
  return PI * r * r;
}

int main()
{
  double r;
  cout << "Enter circle radius: ";
  cin >> r;

  if (r <= 0)
    cout << "Enter a valid radius!" << endl;
  else
    cout << "Area: " << findCircleArea(r) << endl;

  return 0;
}
