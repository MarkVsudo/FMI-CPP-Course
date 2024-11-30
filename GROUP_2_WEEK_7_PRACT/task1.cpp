// Да се напише програма, която въвежда от клавиатурата цяло число n, където n <= 60, и масив от n реални числа. Да се намерят минималния и максималния елемент на масива.

#include <iostream>
using namespace std;

void fillArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

int findMin(int arr[], int n)
{
  int min = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
      min = arr[i];
  }

  return min;
}

int findMax(int arr[], int n)
{
  int max = arr[0];

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  return max;
}

int main()
{
  int arr[100], n;

  do
  {
    cout << "Enter a number (1-60)";
    cin >> n;
  } while (n < 1 || n > 60);

  fillArray(arr, n);

  cout << "Min: " << findMin(arr, n) << endl;
  cout << "Max: " << findMax(arr, n) << endl;

  return 0;
}