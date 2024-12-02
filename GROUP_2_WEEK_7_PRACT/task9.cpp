// По въведена двумерна квадратна матрица намерете сумата на двата диагонала(Решете с функция).

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

int sumMainDiagonal(int matrix[MAX_ROWS][MAX_COLS], int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
  {
    result += matrix[i][i];
  }
  return result;
}

int sumSecondaryDiagonal(int matrix[MAX_ROWS][MAX_COLS], int n)
{
  int result = 0;
  for (int i = 0; i < n; i++)
  {
    result += matrix[i][n - 1 - i];
  }
  return result;
}

void fillSquareMatrix(int matrix[MAX_ROWS][MAX_COLS], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "matrix[" << i << "][" << j << "] ";
      cin >> matrix[i][j];
    }
    cout << endl;
  }
}

int main()
{
  int matrix[MAX_ROWS][MAX_COLS] = {};

  int n;
  cout << "Enter n: ";
  cin >> n;

  fillSquareMatrix(matrix, n);

  cout
      << "Sum of Main Diagonal: " << sumMainDiagonal(matrix, n);
  cout << "\nSum of Secondary Diagonal: " << sumSecondaryDiagonal(matrix, n);

  return 0;
}