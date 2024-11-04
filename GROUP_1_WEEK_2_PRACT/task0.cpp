// Да се провери дали дадено целочислено число се дели на 2 и ако да, да се изведе на конзолата "YES" в противен случай "NO"

// Примерен изход при числото 8 : YES

// Примерен изход при числото 3 : NO

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  cout << (num % 2 == 0 ? "YES" : "NO");

  return 0;
}
