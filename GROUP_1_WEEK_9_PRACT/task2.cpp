// Да се напише функция , която , по подадени указатели към два масива и съответните им размери и подаден трети празен масив и размер 0 , слива първите два масива в третия , така че полученият масив отново да е сортиран. Приемаме , че масивите са от цели числа. (Обединяване на двата масива в един и след това прилагане на сортиране не се приема). Hint: Ще ни олесни ако двата масива са сортирани.

// Примерен вход и изход при аргументи { } 0 {1, 3, 2} 3 {5, 4} 2: 1 2 3 4 5

#include <iostream>
using namespace std;

void mergeSortedArrays(const int *arr1, int size1, const int *arr2, int size2, int *result, int &resultSize)
{
  int i = 0, j = 0, k = 0;

  // Merge the two arrays while maintaining sorted order
  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      result[k++] = arr1[i++];
    }
    else
    {
      result[k++] = arr2[j++];
    }
  }

  // Copy any remaining elements from the first array
  while (i < size1)
  {
    result[k++] = arr1[i++];
  }

  // Copy any remaining elements from the second array
  while (j < size2)
  {
    result[k++] = arr2[j++];
  }

  // Update the size of the result array
  resultSize = k;
}

int main()
{
  const int arr1[] = {1, 2, 3};
  const size_t size1 = sizeof(arr1) / sizeof(arr1[0]);

  const int arr2[] = {2, 3, 4, 5};
  const size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

  int result[100];
  int resultSize = 0;

  mergeSortedArrays(arr1, size1, arr2, size2, result, resultSize);

  for (int i = 0; i < resultSize; i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}
