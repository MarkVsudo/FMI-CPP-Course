// Да се напише функция , която по даден масив от дробни числа ( и неговият размер ) намира индекса на последния негов елемент , който е равен на средното аритметично от неговите съседни елементи ( да се има превдивд, че крайните елементи нямат два съседа)

// Примерен вход и изход при аргументи {1 2 3 4 5 6 3} 7: Index 4

// Примерен вход и изход при аргументи {3 2 3} 3: No such index

#include <iostream>
using namespace std;

void findIndex(const double *arr, const size_t length)
{
  int lastIndex = -1;

  // excluding first & last element
  for (int i = 1; i < length - 1; i++)
  {
    if (arr[i] == (arr[i - 1] + arr[i + 1]) / 2.0)
    {
      lastIndex = i;
    }
  }

  if (lastIndex == -1)
  {
    cout << "No such index" << endl;
  }
  else
  {
    cout << "Index " << lastIndex << endl;
  }
}

int main()
{
  double arr[] = {1, 2, 3, 4, 5, 6, 3};
  const size_t length = sizeof(arr) / sizeof(arr[0]);

  findIndex(arr, length);

  return 0;
}
