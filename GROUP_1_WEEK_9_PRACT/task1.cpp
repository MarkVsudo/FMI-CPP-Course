// Да се напише функция, която приема като аргументи указател към масив и размера на масива и го сортира във възходящ ред (като упражнение да се направи и за низходящ).

// Примерен вход и изход при аргументи {4, 3, 1, 5, 2} 5: 1 2 3 4 5

// Примерен вход и изход при аргументи {3, 56, -2, 2, 55 ,2} 6: -2 2 2 3 55 56

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int *arr, const size_t length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void bubbleSortReverse(int *arr, const size_t length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j + 1] > arr[j])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void printArr(int *arr, const size_t length)
{
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {4, 3, 1, 5, 2};
  const size_t length = sizeof(arr) / sizeof(arr[0]);

  cout << "--- Unsorted array ---" << endl;
  printArr(arr, length);
  cout << "--- Sorted array ---" << endl;
  bubbleSort(arr, length);
  printArr(arr, length);
  cout << "--- Reversed sorted array ---" << endl;
  bubbleSortReverse(arr, length);
  printArr(arr, length);

  return 0;
}
