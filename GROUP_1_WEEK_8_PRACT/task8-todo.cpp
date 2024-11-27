// Да се напише функция, която приема масив и връща дали е конкатенация на два масива, които са палиндроми.
// Вход: [1 2 3 2 1 4 5 5 4], Изход: true

// Вход: [1 2 3 4 5], Изход: false

// Вход: [1 2 3 2 1], Изход: false

#include <iostream>
using namespace std;

// Function to fill the array
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
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  return 0;
}
