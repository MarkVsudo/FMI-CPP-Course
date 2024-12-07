// Да се напише функция , която , по даден масив от цели числа ( и неговият размер ) и цяло число n, премахва от масива всички срещания на даденото число.

// Примерен вход и изход при аргументи {1 2 2 3 7} 5 2 : {1 3 7}

#include <iostream>
using namespace std;

void removeElements(int *arr, size_t length, int n)
{
  size_t newLength = 0;

  for (int i = 0; i < length; i++)
  {
    if (arr[i] != n)
    {
      arr[newLength++] = arr[i];
    }
  }

  length = newLength;

  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {1, 2, 2, 3, 7};
  size_t length = sizeof(arr) / sizeof(arr[0]);

  int n;
  cout << "Enter n: ";
  cin >> n;

  removeElements(arr, length, n);

  return 0;
}
