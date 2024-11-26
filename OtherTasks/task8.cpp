#include <iostream>
using namespace std;

// Function to convert a decimal number to binary
int convertToBinary(int num)
{
  int result = 0;
  int power = 1;

  while (num != 0)
  {
    int digit = num % 2;
    result += digit * power;
    power *= 10;
    num /= 2;
  }
  return result;
}

// Function to check if the number of 1s and 0s in the binary number are equal
bool checkOccurrences(int binaryNum)
{
  int counterOnes = 0;
  int counterZeros = 0;

  while (binaryNum != 0)
  {
    int digit = binaryNum % 10;
    if (digit == 1)
      counterOnes++;
    else
      counterZeros++;
    binaryNum /= 10;
  }

  return counterOnes == counterZeros;
}

int main()
{
  int num;
  do
  {
    cout << "Enter a number from 0 to 255: ";
    cin >> num;
  } while (num < 0 || num > 255);

  int convertedNum = convertToBinary(num);
  cout << checkOccurrences(convertedNum);

  return 0;
}
