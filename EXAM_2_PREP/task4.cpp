#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n (n < 1024): ";
  cin >> n;

  if (n >= 1024 || n < 1)
  {
    cerr << "Invalid input. n must be in the range [1, 1023]." << endl;
    return 1;
  }

  int userNumbers[1024];
  int userInput, userCount = 0;

  cout << "Enter user numbers (end with 0): " << endl;
  while (true)
  {
    cin >> userInput;
    if (userInput == 0)
      break;
    userNumbers[userCount++] = userInput;
  }

  cout << "Result: ";
  for (int i = 1; i <= n; ++i)
  {
    bool isValid = true;
    for (int j = 0; j < userCount; ++j)
    {
      if (i % userNumbers[j] == 0 || userNumbers[j] % i == 0)
      {
        isValid = false;
        break;
      }
    }
    if (isValid)
    {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
