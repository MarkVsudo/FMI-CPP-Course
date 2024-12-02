// Да се напише функция, която въвежда цяло число х, да се провери дали х е елемент на матрицата, и ако е - да се изведе позицията на елемнта в матрицата и елемента да се умножи по 10, а ако не е елемент на матрицата да се изведе подходящо съобщение.

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void findElement(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int num)
{
  bool found = false;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == num)
      {
        cout << num << " is found at: [" << i << "][" << j << "]" << endl;
        matrix[i][j] *= 10;
        found = true;
      }
    }
  }

  if (!found)
  {
    cout << num << " was not found in the matrix." << endl;
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
  findElement(matrix, rows, cols, num);
  printMatrix(matrix, rows, cols);

  return 0;
}