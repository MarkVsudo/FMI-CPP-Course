// Да се напише програма, която приема едно реално число и едно цяло число и връща първото на степен второто, без да използвате cmath/math.h.
// Примерен изход при вход 2 10: 1024

// Примерен изход при вход 2 -1: 0.5

// Примерен изход при вход 5 0: 1

// Примерен изход при вход -10 2: 100

// Примерен изход при вход -10 3: -1000

// Примерен изход при вход 0 100: 0

// Примерен изход при вход 0 0: unknown

#include <iostream>
using namespace std;

int main()
{
  int a, b, result = 1;

  cout << "Enter two numbers: ";

  cin >> a >> b;

  for (int i = 0; i < b; i++)
  {
    result *= a;
  }

  cout << "Result: " << result;

  return 0;
}