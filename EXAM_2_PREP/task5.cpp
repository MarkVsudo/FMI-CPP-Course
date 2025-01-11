#include <iostream>
using namespace std;

const int MAX_ROWS = 256;
const int MAX_COLS = 256;

void fillMatrix(int **matrix, int rows, int cols)
{
  cout << "Enter matrix data" << endl;
  for (int i = 0; i < rows; i++)
  {
    matrix[i] = new int[cols];
    for (int j = 0; j < cols; j++)
    {
      cout << "matrix[" << i << "][" << j << "] ";
      cin >> matrix[i][j];
    }
  }
}

void printMatrix(int **matrix, int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void freeMatrix(int **matrix, int rows)
{
  for (int i = 0; i < rows; i++)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
}

int productOfRow(int **matrix, int rows, int cols, int rowIndex)
{
  int product = 1;
  for (int j = 0; j < cols; j++)
  {
    product *= matrix[rowIndex][j];
  }
  return product;
}

void swapRows(int **&matrix, int rows, int cols)
{
  for (int i = 0; i < rows - 1; i++)
  {
    if (productOfRow(matrix, rows, cols, i) > productOfRow(matrix, rows, cols, i + 1))
    {
      // Swap the row pointers
      int *temp = matrix[i];
      matrix[i] = matrix[i + 1];
      matrix[i + 1] = temp;
    }
  }
}

int main()
{

  int rows, cols;

  do
  {
    cout << "Enter rows count [1 - 256]: ";
    cin >> rows;
  } while (rows < 1 || rows > MAX_ROWS);

  do
  {
    cout << "Enter columns count [1 - 256]: ";
    cin >> cols;
  } while (cols < 1 || cols > MAX_COLS);

  int **matrix = new int *[rows];

  fillMatrix(matrix, rows, cols);
  printMatrix(matrix, rows, cols);
  swapRows(matrix, rows, cols);
  cout << "-----" << endl;
  printMatrix(matrix, rows, cols);
  freeMatrix(matrix, rows);

  return 0;
}