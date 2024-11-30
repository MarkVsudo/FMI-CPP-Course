// Да се прочете въведено цяло положително число n и да се създаде масив от цели числа с n на брой елемента.
// След това се четат въведени n на брой числа, с които се запълва масива. Въвежда се още едно цяло число. а) да се определи среща ли се въведеното число в масива и ако да, колко пъти; б) ако числото се среща в масива, да се определят и отпечатат всички позиции, на които то се среща.

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

void findOccurrences(int arr[], int n, int num)
{
  int count = 0, indexArr[10000], indexCount = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == num)
    {
      count++;
      indexArr[indexCount] = i;
      indexCount++;
    }
  }

  cout << "Number of occurrences of \'" << num << "\' : " << count << endl;

  cout << "--- At positions ---" << endl;

  if (count == 0)
  {
    cout << "No matching elements.";
  }
  else
  {
    for (int i = 0; i < count; i++)
    {
      cout << "arr[" << indexArr[i] << "] ";
    }
  }
}

int main()
{
  int arr[10000], n, num;

  cout << "Enter a number: ";
  cin >> n;

  fillArray(arr, n);

  cout << "Enter a number: ";
  cin >> num;

  findOccurrences(arr, n, num);

  return 0;
}