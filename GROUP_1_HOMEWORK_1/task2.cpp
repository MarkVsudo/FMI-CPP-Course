#include <iostream>
using namespace std;

void mixNumbers(int *&numbers, int n)
{
  for (int i = 2; i < n; i += 4)

  {
    int temp = numbers[i];
    numbers[i] = numbers[i + 1];
    numbers[i + 1] = temp;
  }
}

int main()
{
  int n;
  do
  {
    cout << "Enter an odd natural number: ";
    cin >> n;
  } while (n < 1 || n % 2 == 0);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      if (j <= n - i || j >= n + i)
      {
        cout << " ";
      }
      else if (j == n)
      {
        cout << "*";
      }
      else
      {
        cout << "#";
      }
    }

    cout << endl;
  }

  int numbersArrLength = 2 * n - 2;
  int *numbers = new int[numbersArrLength];

  for (int i = 0; i < numbersArrLength; i++)
  {
    numbers[i] = i + 1;
  }

  mixNumbers(numbers, numbersArrLength);

  for (int i = 0; i < numbersArrLength; i += 2)
  {
    for (int j = 0; j < n - 2; j++)
    {
      cout << " ";
    }

    cout << numbers[i] << " " << numbers[i + 1] << endl;
  }

  delete[] numbers;

  return 0;
}