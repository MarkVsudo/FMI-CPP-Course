/*
 2. Напишете програма, която приема от конзолата температура в Целзий (реално число)
 и отпечатва на екрана температурата, превърната в Келвин и Фаренхайт.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  double celsius;
  cout << "Enter celcius: ";
  cin >> celsius;
  double celsiusToKelvin = celsius + 273.15;
  cout << celsius << "C" << " = " << celsiusToKelvin << "K" << endl;

  return 0;
}