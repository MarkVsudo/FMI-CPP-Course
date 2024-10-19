#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  // 3. Напишете програма, която разменя стойностите на 2 променливи и ги принтира на конзолата.

  int a, b;

  cout << "Enter values for a & b: ";
  cin >> a >> b;

  int enteredA = a;
  int enteredB = b;

  a = enteredB;
  b = enteredA;

  cout << "a: " << a << ", " << "b: " << b;

  return 0;
}
