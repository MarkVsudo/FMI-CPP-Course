// Създайте списък от точки на играчи. Имплементирайте следните функционалности:

// 1. Функция да се добавят точките на нов играч, като това преоразмерява списъка динамично
// 2. Функция да се намерят и върнат като масив, топ N резултатите
// 3. Функция да се премахне най-ниският резултат, като това преоразмерява списъка динамично

#include <iostream>
using namespace std;

void enterPoints(int *&points, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter points for player " << i + 1 << ": ";
    cin >> points[i];
  }
}

void printArray(int *points, int size)
{
  cout << "--- Points --- " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Player " << i + 1 << ": " << points[i] << endl;
  }
}

void bubbleSort(int *arr, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      // Descending bubble sort
      if (arr[j] < arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void addPoints(int *&points, int &size, int newPoints)
{
  int *newPointsArr = new int[size + 1];

  for (int i = 0; i < size; i++)
  {
    newPointsArr[i] = points[i];
  }

  newPointsArr[size] = newPoints;

  delete[] points;

  points = newPointsArr;
  size++;
}

int *getTopN(int *points, int size, int n)
{
  bubbleSort(points, size);

  int *topPointsArr = new int[n];

  for (int i = 0; i < n; i++)
  {
    topPointsArr[i] = points[i];
  }

  return topPointsArr;
}

void removeWorstResult(int *&points, int &size)
{

  int worstResIndex = 0;

  for (int i = 1; i < size; i++)
  {
    if (points[i] < points[worstResIndex])
    {
      worstResIndex = i;
    }
  }

  int temp = points[worstResIndex];
  points[worstResIndex] = points[size - 1];
  points[size - 1] = temp;

  int *newPointsArr = new int[size - 1];

  for (int i = 0; i < size - 1; i++)
  {
    newPointsArr[i] = points[i];
  }

  delete[] points;

  points = newPointsArr;
  size--;
}

int main()
{

  int size;
  do
  {
    cout << "Enter number of players: ";
    cin >> size;
  } while (size < 1);

  int *points = new int[size];

  enterPoints(points, size);

  while (true)
  {
    int option;
    cout << "\nSelect an option (0: Exit, 1: Add points to a new player, 2: Get top results, 3: Remove worst result): ";
    cin >> option;

    switch (option)
    {
    case 0:
      cout << "Exit";
      return 0;
    case 1:
    {
      int newPoints;
      cout << "Enter points for new player: ";
      cin >> newPoints;
      addPoints(points, size, newPoints);
      printArray(points, size);
      break;
    }
    case 2:
    {

      int n;
      do
      {
        cout << "Enter a number: ";
        cin >> n;
      } while (n < 1);
      int *topRes = getTopN(points, size, n);
      for (int i = 0; i < n; i++)
      {
        cout << "Top " << i + 1 << ": " << topRes[i] << "\n";
      }
      delete[] topRes;

      break;
    }
    case 3:
      removeWorstResult(points, size);
      printArray(points, size);
      break;
    }
  }

  delete[] points;

  return 0;
}