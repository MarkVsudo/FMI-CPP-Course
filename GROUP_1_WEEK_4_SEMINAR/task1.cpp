// Напишете функция, която проверява дали е възможен триъгълник по подадени 3 страни

#include <iostream>
using namespace std;

bool triangleValidation(int a, int b, int c)
{
  if (a + b > c && b + c > a && a + c > b)
    return 1;
  else
    return 0;
}

int main()
{
  int a, b, c;
  cout << "Enter sides of triangle: ";
  cin >> a >> b >> c;
  cout << (triangleValidation(a, b, c) ? "Triangle is valid" : "Triangle is not valid");

  return 0;
}
