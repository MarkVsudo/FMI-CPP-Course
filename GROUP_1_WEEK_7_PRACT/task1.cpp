// Въведете масив от n елемента, отпечатайте елементите му наобратно!
// Примерен изход при вход 4 5 6 3: 3 6 5 4

// Примерен изход при вход 1: 1

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

void printReveresedArr(int arr[], int n)
{
  int reversedArr[100];

  for (int i = 0; i < n; i++)
  {
    reversedArr[n - i - 1] = arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << reversedArr[i] << " ";
  }
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  printReveresedArr(arr, n);

  return 0;
}