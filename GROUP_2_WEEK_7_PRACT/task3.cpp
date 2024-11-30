// От клавиатурата се въвеждат N числа, където N <= 60,. Да се изведат в обратен ред.

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

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }
}

void printReveresedArray(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }
}

int main()
{
  int arr[60], n;

  do
  {
    cout << "Enter a number (1-60): ";
    cin >> n;
  } while (n < 1 || n > 60);

  fillArray(arr, n);

  cout << "Normal array: " << endl;
  printArray(arr, n);

  cout << "Reversed array: " << endl;
  printReveresedArray(arr, n);

  return 0;
}
