// По въведено естествено число n изведете n-тото число от редицата на Фибоначи.

// Пример:

// Вход: 5

// Изход: 5 (защото 0 (F0), 1 (F1), 1 (F2), 2 (F3), 3(F4), 5 (F5) -> 5 е петото число от серията на Фибоначи)

#include <iostream>
using namespace std;

int main()
{
  // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

  int n;
  cout << "Enter a natural number: ";
  cin >> n;

  if (n == 0)
  {
    cout << "Fibonacci number at position 0 is: 0" << endl;
    return 0;
  }
  else if (n == 1)
  {
    cout << "Fibonacci number at position 1 is: 1" << endl;
    return 0;
  }

  int first = 0, second = 1, third;

  for (int i = 2; i <= n; i++) // Започваме от i = 2, защото вече знаем F(0) и F(1)
  {
    third = first + second;
    first = second;
    second = third;
  }

  cout << "Fibonacci number at position " << n << " is: " << third << endl;

  return 0;
}
