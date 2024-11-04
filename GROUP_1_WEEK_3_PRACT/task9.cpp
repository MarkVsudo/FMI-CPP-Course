// Да се напише програма, която чертае квадрат от '*' със размер на страната въведен от клавиатурата. Нека е изпълнен само под главния диагонал.
// Примерен изход при вход 8:

// * * * * * * * *
// *             *
// * *           *
// * * *         *
// * * * *       *
// * * * * *     *
// * * * * * *   *
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
      // Print '*' if:
      // - first row (i == 0)
      // - last row (i == size-1)
      // - first column (j == 0)
      // - last column (j == size-1)
      // - below main diagonal (i > j)
      if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || i > j)
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