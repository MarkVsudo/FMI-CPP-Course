// Да се напише програма, която приема цяло положително число n и отпечатва следната пирамида от доларчета

// Примерен изход при вход 2:

// $
// $ $
// Примерен изход при вход 4:

// $
// $ $
// $ $ $
// $ $ $ $

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  if (n < 1)
  {
    cout << "Enter a valid number!";
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j <= i)
      {
        cout << "$ ";
      }
    }
    cout << endl;
  }

  return 0;
}