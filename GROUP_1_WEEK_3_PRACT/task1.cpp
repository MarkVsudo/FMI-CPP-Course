// Да се напише програма, която след въвеждане на 10 числа от потребителя пресмята тяхната сума!
// Примерен изход при вход 1 2 3 4 5 6 7 8 9 10: 55

#include <iostream>
using namespace std;

int main()
{
  int sum = 0;

  cout << "Please enter 10 numbers: ";

  for (int i = 0; i < 10; i++)
  {
    int num;
    cin >> num;
    sum += num;
  }

  cout << "Sum is: " << sum;

  return 0;
}