#include <iostream>
using namespace std;

void fillArray(int *&arr, int length)
{
  for (int i = 0; i < length; i++)
  {
    cin >> arr[i];
  }
}

void printArr(int *arr, int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << arr[i] << " ";
  }
}

void bubbleSort(int *&arr, int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

bool isPrime(int num)
{
  if (num < 2)
    return false;

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
      return false;
  }

  return true;
}

bool isEven(int num)
{
  return num % 2 == 0;
}

void mergeArrays(int *&arr, int *arr1, int *arr2, int length1, int length2)
{
  for (int i = 0; i < length1; i++)
  {
    arr[i] = arr1[i];
  }
  for (int i = 0; i < length2; i++)
  {
    arr[length1 + i] = arr2[i];
  }
}

// ТОЧКА 1
void findPrimeNumbers(int *numbers, int length)
{
  int *primeNumbers = new int[length];
  int primeNumbersCount = 0;

  for (int i = 0; i < length; i++)
  {
    if (isPrime(numbers[i]))
    {
      primeNumbers[primeNumbersCount++] = numbers[i];
    }
  }

  if (primeNumbersCount == 0)
  {
    cout << "Hmm, lucky you! No primes.";
  }
  else
  {
    bubbleSort(primeNumbers, primeNumbersCount);
    printArr(primeNumbers, primeNumbersCount);
  }

  delete[] primeNumbers;
}

// ТОЧКА 2
void findPrimeAndEvenNumbers(int *numbers, const int length)
{
  int *primeNumbers = new int[length];
  int primeNumbersCount = 0;

  for (int i = 0; i < length; i++)
  {
    if (isPrime(numbers[i]))
    {
      primeNumbers[primeNumbersCount++] = numbers[i];
    }
  }

  int *evenNumbers = new int[length];
  int evenNumbersCount = 0;

  for (int i = 0; i < length; i++)
  {
    if (isEven(numbers[i]) && !isPrime(numbers[i]))
    {
      evenNumbers[evenNumbersCount++] = numbers[i];
    }
  }

  int mergedArrayLength = primeNumbersCount + evenNumbersCount;
  int *mergedArray = new int[mergedArrayLength];

  if (primeNumbersCount == 0 && evenNumbersCount == 0)
  {
    cout << "Hmm, lucky you! No primes and no evens.";
  }
  else
  {
    bubbleSort(primeNumbers, primeNumbersCount);
    bubbleSort(evenNumbers, evenNumbersCount);
    mergeArrays(mergedArray, primeNumbers, evenNumbers, primeNumbersCount, evenNumbersCount);
    printArr(mergedArray, mergedArrayLength);
  }

  delete[] primeNumbers;
  delete[] evenNumbers;
  delete[] mergedArray;
}

int main()
{
  int n;
  do
  {
    cout << "Enter a natural number: ";
    cin >> n;
  } while (n < 1);

  int *numbers = new int[n];

  cout << "Input " << n << " numbers in the array: ";
  fillArray(numbers, n);

  //--- ТОЧКА 1 ---
  // findPrimeNumbers(numbers, n);
  //--- ТОЧКА 2 ---
  findPrimeAndEvenNumbers(numbers, n);

  delete[] numbers;

  return 0;
}