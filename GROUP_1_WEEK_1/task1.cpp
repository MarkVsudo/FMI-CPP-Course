// Task 1 - Геомерия
// Да се намерят лицето и обиколката на правоъгълник със страни дълги 10 см и 3 см
// Примерен изход : Perimeter = 26, Area = 30

// Да се намерят лицето и обиколката на триъгълник със страни дълги 11 см и 17 см и 8см
// Примерен изход : Perimeter = 36, Area = 35.5

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  // Part 1
  int length = 10, height = 3;
  int rectPerimeter = 2 * (length + height);
  int rectArea = length * height;

  cout << "Perimeter = " << rectPerimeter << ", Area = " << rectArea << endl;

  // Part 2
  int a = 11, b = 17, c = 8;
  int triPerimeter = a + b + c;
  double triSemiPerimeter = (a + b + c) / 2;
  double triArea = ceil(sqrt(triSemiPerimeter * (triSemiPerimeter - a) * (triSemiPerimeter - b) * (triSemiPerimeter - c)));

  cout << "Perimeter = " << triPerimeter << ", Area = " << triArea;

  return 0;
}