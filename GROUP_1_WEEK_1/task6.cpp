// Task 6 - От Целзий във Фаренхайт и обратно
// Напишете програма, която приема число, което ще е температура и в първия случай приемаме, че трябва от Целзий във Фаренхайт да премине, а във втория от Фаренхайт в Целзий (Как става това преминаване може да проверите в Гугъл :) )
// Примерен изход при вход 0 : From C to F -> 32.00 F, From F to C -> -17.777 C.

// Примерен изход при вход 15 : From C to F -> 59.00 F, From F to C -> -9.44 C.

// Примерен изход при вход 32 : From C to F -> 89.60 F, From F to C -> 0 C.

#include <iostream>
using namespace std;

int main()
{

  double temperature;

  cout << "Enter temperature in C: ";
  cin >> temperature;

  temperature = (temperature * 1.8) + 32;

  cout << "From C to F -> " << temperature << " F, ";

  temperature = (5.0 / 9.0) * (temperature - 32);

  cout << "From F to C -> " << temperature << " C";

  return 0;
}