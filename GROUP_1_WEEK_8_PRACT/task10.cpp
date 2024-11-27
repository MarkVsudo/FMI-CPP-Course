// Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се отпечатат броя на инверсиите в масива.
// Инверсия ще наричаме двойка индекси (i,j), където i < j и arr[i] > arr[j]

// Вход: 6 5 4 3 2 1 0 Изход: 15 //в масива [5 4 3 2 1 0] има 15 инверсии.

// Вход: 5 10 11 12 13 14 15, Изход: 0

#include <iostream>
using namespace std;

int countInversions(int arr[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        count++;
      }
    }
  }

  return count;
}

void fillArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

int main()
{
  int n, arr[1000];

  do
  {
    cout << "Enter array size: ";
    cin >> n;
  } while (n <= 0 || n > 1000);

  fillArr(arr, n);

  cout << countInversions(arr, n);

  return 0;
}