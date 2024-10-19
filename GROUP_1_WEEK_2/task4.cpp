// Да се въведат три реални числа и да се провери дали може да са страни на триъгълник (a < b + c) (b < a + c) (c < a + b).

// Примерен изход при числата 1 1 2 : NO, you can't make a triangle out of this :(

// Примерен изход при числата 3 4 5 : YES, you can make a triangle out of this :)

#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "Enter sides for a triangle: ";
  cin >> a >> b >> c;

  bool check = a < b + c && b < a + c && c < a + b;

  if (check)
    cout << "YES, you can make a triangle out of this :)";
  else
    cout << "NO, you can't make a triangle out of this :(";

  return 0;
}