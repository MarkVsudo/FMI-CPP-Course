// Въведете масив от n елемента. Да се изведат в конзолата най - големия срещан елемент в масива и най - малкия. Да се изведат също втория по големина елемент и втория най - малък елемент.
// Примерен изход при вход 1 2 3 4 5: Min 1, Max 5, Second Min 2, Second Max 4

// Примерен изход при вход 45 34 12 37 5: Min 5, Max 45, Second Min 2, Second Max 4

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

void selectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  selectionSort(arr, n);

  int min = arr[0], secondMin = arr[1], max = arr[n - 1], secondMax = arr[n - 2];

  cout << "Min " << min << ", Max " << max << ", Second Min " << secondMin << ", Second Max " << secondMax;

  return 0;
}
