#include <iostream>
using namespace std;

void makeFibSentence(int length)
{
  int *fibNumbers = new int[length]{1, 1};

  for (int i = 2; i < length; i++)
  {
    fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2];
  }

  char currentChar = 'A';
  for (int i = 0; i < length; i++)
  {
    int wordLength = fibNumbers[i];
    for (int j = 0; j < wordLength; j++)
    {
      cout << currentChar;
      currentChar++;
      if (currentChar > 'Z')
      {
        currentChar = 'A';
      }
    }
    cout << " ";
  }

  delete[] fibNumbers;
}

int main()
{
  int N;
  do
  {
    cout << "Enter a natural number: ";
    cin >> N;
  } while (N < 1);

  makeFibSentence(N);

  return 0;
}
