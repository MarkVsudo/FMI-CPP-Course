// Да се напише програма, която въвежда от клавиатурата цяло число n, където n <= 60, и масив от n реални числа. Да се намерят минималния и максималния елемент на масива. Да се разменят местата им в масива и да се изведе новия масив.

#include <iostream>
using namespace std;

void fillArray(double arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }
}

void swapMinMax(double arr[], int n)
{
  int indexMinEl = 0, indexMaxEl = 0;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[indexMinEl])
      indexMinEl = i;

    if (arr[i] > arr[indexMaxEl])
      indexMaxEl = i;
  }

  cout << "Min value is: " << arr[indexMinEl] << " at index " << indexMinEl << endl;
  cout << "Max value is: " << arr[indexMaxEl] << " at index " << indexMaxEl << endl;

  // Смяна min & max
  double temp = arr[indexMinEl];
  arr[indexMinEl] = arr[indexMaxEl];
  arr[indexMaxEl] = temp;

  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] = " << arr[i] << endl;
  }
}

int main()
{
  double arr[60];
  int n;

  do
  {
    cout << "Enter a number (1-60): ";
    cin >> n;
  } while (n < 1 || n > 60);

  fillArray(arr, n);

  swapMinMax(arr, n);

  return 0;
}
