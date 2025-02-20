#include <iostream>

using namespace std;

int countDigit(unsigned number, unsigned digit)
{
  if (digit > 9)
    return -1;

  unsigned counter = 0;

  while (number != 0)
  {
    if (number % 10 == digit)
      counter++;

    number /= 10;
  }

  return counter;
}

unsigned countofKMeetingInN(unsigned number, unsigned k)
{
  unsigned count = 0;

  for (int i = 0; i <= 9; i++)
  {
    if (countDigit(number, i) == k)
      count++;
  }

  return count;
}
int main()
{
  cout << countofKMeetingInN(22334455, 2);
}