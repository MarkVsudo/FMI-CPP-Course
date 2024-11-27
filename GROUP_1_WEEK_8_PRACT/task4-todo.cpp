// Да се напише функция, която приема масив и връща най-малкото общо кратно на числата в масива.
// Вход: [9 18 6 12]

// Изход: 36

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

int leastCommonMultiple(int arr[], int n)
{
  // to-do
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  cout << leastCommonMultiple(arr, n);

  return 0;
}