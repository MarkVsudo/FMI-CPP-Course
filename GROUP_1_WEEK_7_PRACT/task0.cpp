// След въвеждане на цяло число n, да се инициализира масив от n на брой цели числа, като потребителят въвежда n на брой числа. След това да се обходи масива и да се изведат в конзолата всички числа. След това отново да се направи обхождане на масива и да се сметне средното аритметично на числата. (Да се направи и с масив от реални числа).
// Примерен изход при вход 3 2 2 2: [2,2,2] 2

// Примерен изход при вход 4 3 10 10 3: [4,3,10,10,3] 6.5

// Примерен изход при вход 5 0 0 0 0 0: [0,0,0,0,0] 0

#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
  cout << "[";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
    if (i < n - 1)
    {
      cout << ",";
    }
  }
  cout << "] ";
}

void fillArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

double calculateAvg(int arr[], int n)
{
  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  return sum / n;
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  printArr(arr, n);

  cout << calculateAvg(arr, n);

  return 0;
}