// Да се напише функция, която намира и извежда минималния и максималния елемент в матрицата.

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int findMax(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
  int maxElem = matrix[0][0];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] > maxElem)
      {
        maxElem = matrix[i][j];
      }
    }
  }

  return maxElem;
}

int findMin(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
  int minElem = matrix[0][0];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] < minElem)
      {
        minElem = matrix[i][j];
      }
    }
  }

  return minElem;
}

void fillMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "matrix[" << i << "][" << j << "] ";
      cin >> matrix[i][j];
    }
  }
}

int main()
{
  int matrix[MAX_ROWS][MAX_COLS]{};
  int rows, cols;

  cout << "Enter rows count: ";
  cin >> rows;

  cout << "Enter cols count: ";
  cin >> cols;

  fillMatrix(matrix, rows, cols);

  cout << "Max element: " << findMax(matrix, rows, cols);
  cout << "\nMin element: " << findMin(matrix, rows, cols);

  return 0;
}