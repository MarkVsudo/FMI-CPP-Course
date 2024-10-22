// Да се пресметне n! за въведено от потребителя число n.

#include <iostream>
using namespace std;

int main()
{
  unsigned int number;

  cout << "Enter a non-negative number: ";
  cin >> number;

  if (number < 0)
  {
    cout << "Please enter a non-negative number!";
    return 1;
  }

  int factorial = 1;

  for (int i = 1; i <= number; i++)
  {
    factorial *= i;
  }

  cout << "Factorial of " << number << " is: " << factorial << endl;

  return 0;
}
