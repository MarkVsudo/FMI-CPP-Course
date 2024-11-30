#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++) // Loop for each pass
  {
    for (int j = 0; j < n - i - 1; j++) // Inner loop for comparing adjacent elements
    {
      if (arr[j] > arr[j + 1]) // Swap if elements are in the wrong order
      {
        // Swap arr[j] and arr[j + 1]
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void fillArr(int arr[], int n)
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

int main()
{
  int arr[100], n;

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  cout << "Unsorted array: " << endl;
  printArray(arr, n);

  bubbleSort(arr, n);

  cout << "Sorted array: " << endl;
  printArray(arr, n);

  return 0;
}
