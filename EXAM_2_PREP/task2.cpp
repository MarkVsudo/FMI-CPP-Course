// Напишете програма, която да позволява рисуване върху платно.
// Платното трябва да може да се преоразмерява динамично, като запазва нарисуваното до сега.
// Запълнен пиксел има стойност #, а празен -  .
// Имплементирайте следните функционалности:
// 1. Функция за запълване на пиксел
// 2. Функция за изтриване на пиксел
// 3. Функция за преоразмеряване на платното

#include <iostream>
using namespace std;

char **createCanvas(int rows, int cols)
{
  char **canvas = new char *[rows];
  for (int i = 0; i < rows; i++)
  {
    canvas[i] = new char[cols];
    for (int j = 0; j < cols; j++)
    {
      canvas[i][j] = ' ';
    }
  }
  return canvas;
}

void displayCanvas(char **canvas, int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << canvas[i][j];
    }
    cout << endl;
  }
}

void freeMatrix(char **canvas, int rows)
{
  for (int i = 0; i < rows; i++)
  {
    delete[] canvas[i];
  }
  delete[] canvas;
}

void drawPixel(char **canvas, int y, int x)
{
  canvas[y][x] = '#';
}

void removePixel(char **canvas, int y, int x)
{
  canvas[y][x] = ' ';
}

char **resizeMatrix(char **canvas, int &rows, int &cols, int newRows, int newCols)
{
  char **newCanvas = createCanvas(newRows, newCols);

  int rowsToCopy = (rows > newRows) ? newRows : rows;
  int colsToCopy = (cols > newCols) ? newCols : cols;

  for (int i = 0; i < rowsToCopy; i++)
  {
    for (int j = 0; j < colsToCopy; j++)
    {
      newCanvas[i][j] = canvas[i][j];
    }
  }

  freeMatrix(canvas, rows);

  rows = newRows;
  cols = newCols;

  return newCanvas;
}

int main()
{

  int rows, cols;
  cout << "Enter dimensions of canvas: ";
  cin >> rows >> cols;

  char **canvas = createCanvas(rows, cols);

  while (true)
  {
    int option;
    cout << "0: Exit\n";
    cout << "1: Display canvas\n";
    cout << "2: Draw a pixel\n";
    cout << "3: Remove a pixel\n";
    cout << "4: Resize canvas\n";
    cin >> option;

    switch (option)
    {
    case 0:
      cout << "Exit";
      return 0;
    case 1:
    {
      displayCanvas(canvas, rows, cols);
      break;
    }
    case 2:
    {
      int x, y;
      cout << "Enter coordinates to draw a pixel\n";

      do
      {
        cout << "X-axis point (column, 0 to " << cols - 1 << "): ";
        cin >> x;
      } while (x < 0 || x >= cols);

      do
      {
        cout << "Y-axis point (row, 0 to " << rows - 1 << "): ";
        cin >> y;
      } while (y < 0 || y >= rows);

      drawPixel(canvas, y, x);
      displayCanvas(canvas, rows, cols);
      break;
    }

    case 3:
    {
      int x, y;
      cout << "Enter coordinates to draw a pixel\n";

      do
      {
        cout << "X-axis point (column, 0 to " << cols - 1 << "): ";
        cin >> x;
      } while (x < 0 || x >= cols);

      do
      {
        cout << "Y-axis point (row, 0 to " << rows - 1 << "): ";
        cin >> y;
      } while (y < 0 || y >= rows);

      removePixel(canvas, y, x);
      displayCanvas(canvas, rows, cols);
      break;
    }
    case 4:
    {
      int newRows, newCols;
      cout << "Enter new size (rows and columns): ";
      cin >> newRows >> newCols;
      canvas = resizeMatrix(canvas, rows, cols, newRows, newCols);
      break;
    }
    default:
      cout << "Wrong input!";
    }
  }

  freeMatrix(canvas, rows);

  return 0;
}