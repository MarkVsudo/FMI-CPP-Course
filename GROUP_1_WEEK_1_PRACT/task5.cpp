// Task 5 - Костенурки
// Напишете програма, която пресмята нужните разходи за закупуването на храна за костенурки. Храната се пазарува основно за костенурки, от зоомагазин, но понякога стопанинът им купува и за котките на съседката му. Една опаковка храна за костенурките е на цена 2.50лв., а всяка останала, която не е за тях струва 4лв.
// Примерен изход при вход 5 4 : 28.50 lv.

// Примерен изход при вход 0 4 : 16 lv.

// Примерен изход при вход 1 0 : 2.50 lv.

// След като решите задачата вмъкнете 3-та променлива, която определя дали е Happy Hour, т.е ако е Happy Hour, да се изведе на екрана крайна сметка с 30% по - евтина

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double turtleFoodPrice = 2.50;
  int catFoodPrice = 4;

  int turtleFoodCount, catFoodCount;

  cout << "Enter amount of turtle and cat food packages: ";
  cin >> turtleFoodCount >> catFoodCount;

  double calculationTurtleFood = fabs(turtleFoodPrice * turtleFoodCount);
  double calculationCatFood = fabs(catFoodPrice * catFoodCount);

  bool happyHour = false;

  double totalPrice = (calculationTurtleFood + calculationCatFood) * (1 - 0.3 * happyHour);

  cout << "Total price: " << totalPrice << "lv.";

  return 0;
}