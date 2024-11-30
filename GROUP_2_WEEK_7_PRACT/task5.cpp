// Да се напише програма, която въвежда от клавиатурата цяло число n, където n <= 60, и масив от n цели числа. Да се провери дали масивът е симетричен(огледален, палиндром).

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

bool findPalindrome(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    if (arr[i] != arr[n - i - 1])
      return false;
  }

  return true;
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

  cout << boolalpha << findPalindrome(arr, n);

  return 0;
}