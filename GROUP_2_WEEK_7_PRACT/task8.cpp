// Напишете програма, която въвежда от клавиатурата цяло число от 2 до 30. Въведете толкова елементи в масива, колкото е въведеното от клавиатурата число. Да се намери и изведе броя на числата от масива, чийто сбор от цифрите им е двуцифрено число. Ако няма такива изведете подходящо съобщение.

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

int doubleDigitSum(int arr[], int n)
{
  int count = 0;

  for (int i = 0; i < n; i++)
  {
    int currentElem = arr[i];
    int sum = 0;

    while (currentElem > 0)
    {
      sum += currentElem % 10;
      currentElem /= 10;
    }

    if (sum >= 10 && sum <= 99)
    {
      count++;
    }
  }

  return count;
}

int main()
{
  int arr[29], n;

  do
  {
    cout << "Enter a number: ";
    cin >> n;
  } while (n < 2 || n > 30);

  fillArray(arr, n);

  cout << doubleDigitSum(arr, n);

  return 0;
}