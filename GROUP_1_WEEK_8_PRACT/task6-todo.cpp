// Да се напише функция, която приема масив и връща най-големият общ делител на числата в масива.
// Вход: [9 18 6 12]

// Изход: 3

#include <iostream>
using namespace std;

void fillArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

int greatestCommonDivisor(int arr[], int n)
{
  // to-do
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  cout << greatestCommonDivisor(arr, n);

  return 0;
}