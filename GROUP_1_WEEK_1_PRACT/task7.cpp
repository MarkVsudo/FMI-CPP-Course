// Task 7 - Creeper
// Напишете програма, която пресмята обема на creeper от играта “Minecraft” по въведен от потребителя x. Знаем че главата нa creeper е куб със страна x, тялото му е паралелепипед със страни x, x/2 и 2x, a предните и задните му крака са със страни x, x/2 и 3x/4.
// Пояснение - разглеждаме предните му два крака като един паралелепипед и задните два също.

// Примерен изход при вход 3 : The creeper's volume is 74.25

// Примерен изход при вход 4 : The creeper's volume is 176

// Примерен изход при вход 10 : The creeper's volume is 2750

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x;

  cout << "Enter value for x: ";
  cin >> x;

  double headVolume = pow(x, 3);
  double bodyVolume = x * (x / 2.0) * (2 * x);
  double footVolume = x * (x / 2.0) * ((3 * x) / 4.0);
  double totalVolume = headVolume + bodyVolume + (footVolume * 2);

  cout << "The creeper's volume is " << totalVolume << endl;

  return 0;
}
