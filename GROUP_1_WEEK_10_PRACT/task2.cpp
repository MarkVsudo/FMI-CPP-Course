// Да се напише програма, която работи с някакъв масив от цели числа, неговия размер и капацитет. В началото нека това да е int* arr = nullptr, int size = 0, int capacity = 0. За този масив да се направи меню от команди. Командите са следните:
// 0 - end.
// Приключване на програмата и принтиране на масива.
// 1 - create.
// Потребителя е попитан за цяло число и след въвеждането му то служи за инициализирането на нашия масив. Ако масивът вече е инициализиран да се зачисти и на негово място дa дойде празен масив с новия капацитет.
// 2 - push back.
// Потребителя е попитан за цяло число и след въвеждането му то да се залепи за края на масива. || Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!
// 3 - push front.
// Потребителя е попитан за цяло число и след въвеждането му то да се залепи за началото на масива. || Ако капацитета на масива бъде надвишен да се използва динамична памет по подходящ начин!
// 4 - copy.
// Потребителят трябва да въведе нов масив и нашия масив да стане копие на въведения масив.
// 5 - pop_back.
// Изтрива се последния елемент на масива.
// 6 - pop_front.
// Изтрива се първия елемент на масива.
// За всяка команда да се напише функция!

// Бонус или за домашна -> ако функциите ви връщат int* направете ги изцяло void като свойството им е да променят подадения масив както задача очаква.

#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
  if (arr == nullptr)
  {
    cout << "Array is empty." << endl;
  }
  else
  {
    for (int i = 0; i < size; i++)
    {
      cout << "arr[" << i << "] = " << arr[i] << endl;
    }
  }
}

void create(int *&arr, int &size, int &capacity)
{ // Pass arr as a reference to a pointer

  int n;
  do
  {
    cout << "Enter a natural number for capacity: ";
    cin >> n;
  } while (n <= 0);

  delete[] arr;

  arr = new int[n];
  capacity = n;

  int elemCount;
  do
  {
    cout << "Enter number of elements you want to add to the array: ";
    cin >> elemCount;
  } while (elemCount <= 0);

  size = elemCount;

  for (int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] ";
    cin >> arr[i];
  }

  cout << "Array created with capacity " << n << "." << endl;
}

void pushBack(int *&arr, int &capacity, int &size, int num)
{
  arr[size] = num;
  size++;
}

void pushFront(int *&arr, int &capacity, int &size, int num)
{
  size++;

  for (int i = 0; i < size; i++)
  {
    int temp = arr[size - i - 2];
    arr[size - i - 2] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }

  arr[0] = num;
}

void copy(int *&arr, int &size, int &capacity)
{
  int newSize;
  do
  {
    cout << "Enter the size of the new array: ";
    cin >> newSize;
  } while (newSize <= 0);

  int *newArr = new int[newSize];

  cout << "Enter elements for the new array:" << endl;
  for (int i = 0; i < newSize; ++i)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> newArr[i];
  }

  delete[] arr;
  arr = newArr;

  size = newSize;
  capacity = newSize;

  cout << "Array successfully copied!" << endl;
}

void popBack(int *&arr, int &capacity, int &size, int num)
{
  size--;
}

void popFront(int *&arr, int &capacity, int &size, int num)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = arr[i + 1];
  }
  size--;
}

int main()
{

  int *arr = nullptr;
  int size = 0;
  int capacity = 0;

  while (true)
  {
    int command;
    cout << "Select an option from the menu: ";
    cout << "\n0 -> Exit";
    cout << "\n1 -> Create";
    cout << "\n2 -> Push back";
    cout << "\n3 -> Push front";
    cout << "\n4 -> Copy";
    cout << "\n5 -> Pop back";
    cout << "\n6 -> Pop front\n";
    cin >> command;

    switch (command)
    {
    case 0:
      printArray(arr, size);
      delete[] arr;
      return 0;
    case 1:
      create(arr, size, capacity);
      break;
    case 2:
      int valueBack;
      cout << "Enter a number to add to the back: ";
      cin >> valueBack;
      pushBack(arr, capacity, size, valueBack);
      printArray(arr, size);
      break;
    case 3:
      int valueFront;
      cout << "Enter a number to add to the front: ";
      cin >> valueFront;
      pushFront(arr, capacity, size, valueFront);
      printArray(arr, size);
      break;
    case 4:
      copy(arr, size, capacity);
      printArray(arr, size);
      break;
    case 5:
      popBack(arr, capacity, size, valueBack);
      printArray(arr, size);
      break;
    case 6:
      popFront(arr, capacity, size, valueBack);
      printArray(arr, size);
      break;
    }
  }

  return 0;
}