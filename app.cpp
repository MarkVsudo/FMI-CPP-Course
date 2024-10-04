#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x;
  cout << "Enter value for x: ";
  cin >> x;

  double nominator = x / (2 * x - 1);
  double denominator = pow(cos(x / (abs(pow(x, 5) - 1))), 2);
  double equation = sin(sqrt(nominator / denominator));

  cout << "Equation result: " << equation;

  return 0;
}