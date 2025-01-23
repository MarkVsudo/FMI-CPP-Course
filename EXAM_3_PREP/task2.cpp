// Напишете функция fib (int number), която намира n-то число на Фибоначи рекурсивно.
// Примерен вход и изход: fib(9) -> 34, fib(20) -> 6765

#include <iostream>
using namespace std;

// 1 1 2 3 5 8 13 21 34

int fib(int number)
{

  if (number == 1 || number == 2)
  {
    return 1;
  }

  return (fib(number - 1) + fib(number - 2));
}

int main()
{

  cout << fib(9);

  return 0;
}