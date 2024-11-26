// Трайчо се натъкнал на списък от числа. Сега той се чуди колко от тях са му интересни. Трайчо смята едно число за интересно ако цифрите му са в ненамаляващ ред. Напишете програма, която по даден списък от неотрицателни числа проверява дали те са интересни. Първо прочетете всички числа и после изведете отговорът за всяко.

// Вход: На първия ред ще има едно число N <= 1000 - броя числа от списъка на Трайчо. Следват N реда с по едно число - числата от списъка на Трайчо.

// Изход: Трябва да се изведат N реда, на всеки от които има YES или NO: всеки ред показва дали съответното число от списъка е интересно.

// Пример:

// Вход:

// 5
// 123
// 1111
// 15678
// 341
// 0
// Изход:

// YES
// YES
// YES
// NO
// YES

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

bool isInterestingNumber(int arrElement)
{
  while (arrElement > 0)
  {
    int lastDigit = arrElement % 10;
    int secondToLastDigit = (arrElement / 10) % 10;
    if (lastDigit < secondToLastDigit)
    {
      return false;
    }
    arrElement /= 10;
  }

  return true;
}

int main()
{
  int n, arr[100];

  cout << "Enter array size: ";
  cin >> n;

  fillArr(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << (isInterestingNumber(arr[i]) ? "YES\n" : "NO\n");
  }

  return 0;
}
