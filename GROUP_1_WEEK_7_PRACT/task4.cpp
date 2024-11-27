// Въведете масив от n елемента и цяло положително число. Да се провери дали един масив е огледален спрямо средата си.
// Примерен изход при вход 1 2 3 2 1: YES

// Примерен изход при вход 1 0 0 0 0 1: YES

// Примерен изход при вход 1 45 33 1: NO

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

bool isArrMirror(int arr[], int n)
{
  int elementsFromEachSide = n / 2;

  for (int i = 0; i < elementsFromEachSide; i++)
  {
    if (arr[i] != arr[n - i - 1])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  cout << (isArrMirror(arr, n) ? "YES" : "NO");

  return 0;
}