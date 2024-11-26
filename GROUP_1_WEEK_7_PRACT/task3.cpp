// Въведете масив от n елемента и цяло положително число. Да се изведе на конзолата колко пъти го има това число в масива. Също да се изведе на кои позиции сме го срещнали при обхождане.
// Примерен изход при вход 1 3 3 3 5 3: 3 Positions are : 1 2 3

// Примерен изход при вход 1 2 3 4 5 50: 0 Number isn't in this array

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

int countDuplicates(int arr[], int n, int number)
{
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == number)
    {
      count++;
    }
  }

  return count;
}

void findDuplicatesPosition(int arr[], int n, int number)
{
  bool found = false;

  cout << " Positions are: ";
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == number)
    {
      cout << i << " ";
      found = true;
    }
  }

  if (!found)
  {
    cout << "Number isn't in this array";
  }
}

int main()
{
  int n, arr[100], number;

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  cout << "Enter a number: ";
  cin >> number;

  cout << countDuplicates(arr, n, number);
  findDuplicatesPosition(arr, n, number);

  return 0;
}