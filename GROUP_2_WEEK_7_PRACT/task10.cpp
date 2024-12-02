// Да се напише функция, която извежда матрица, получена от въведената, като всеки нейн елемент е увеличен с 10.

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void multiplyMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int num)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      matrix[i][j] *= num;
    }
  }
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

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int matrix[MAX_ROWS][MAX_COLS]{};
  int rows, cols, num;

  cout << "Enter rows count: ";
  cin >> rows;

  cout << "Enter cols count: ";
  cin >> cols;

  cout << "Enter a number: ";
  cin >> num;

  fillMatrix(matrix, rows, cols);
  multiplyMatrix(matrix, rows, cols, num);
  printMatrix(matrix, rows, cols);

  return 0;
}