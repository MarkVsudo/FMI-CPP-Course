// Да се напише програма, която чертае рамка от '*' със размер на страната въведен от клавиатурата. Нека е изпълнен само под главния диагонал.
// Примерен изход при вход 8:

// * * * * * * * *
// *             *
// *             *
// *             *
// *             *
// *             *
// *             *
// * * * * * * * *

#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter square size: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (j == 0 || i == 0 || j == size - 1 || i == size - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}