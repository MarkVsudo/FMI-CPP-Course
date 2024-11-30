// Да се напише програма, която въвежда от клавиатурата цяло число n, където n <= 60, и масив от n реални числа. Да се намерят минималния и максималния елемент на масива.

#include <iostream>
using namespace std;

void fillArray(double arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

double findMin(double arr[], int n)
{
  double min = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

double findMax(double arr[], int n)
{
  double max = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

int main()
{
  double arr[60];
  int n;

  do
  {
    cout << "Enter a number (1-60): ";
    cin >> n;
  } while (n < 1 || n > 60);

  fillArray(arr, n);

  cout << "Min: " << findMin(arr, n) << endl;
  cout << "Max: " << findMax(arr, n) << endl;

  return 0;
}
