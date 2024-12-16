// Имате хотел с n на брой стаи (за упражнение заделете динамична памет). Стаите обаче имат два статуса - заета с номер на клиент или незаета без никакъв номер. Напишете програма, която поддържа следните команди.
// 0 - поздравява потребителя и програмата приключва
// 1 - запазва стая на определен индекс с клиентски номер (ако на този индекс вече няма запазена)
// 2 - нулира стая на определен индекс
// 3 - нулира всички стаи с определен клиентски номер
// 4 - принтира всички свободни стаи с клиентски номера и брой на заети стаи
// Под нулиране НЕ се има предвид да се съчини специален символ или число, с което да се маркира стаята като нулирана.

#include <iostream>
using namespace std;

void greetAndExit()
{
  cout << "Thank you for using the hotel system. Goodbye!" << endl;
}

void reserveRoom(int *rooms, int n, int index, int clientID)
{
  if (index < 0 || index >= n)
  {
    cout << "Invalid room index." << endl;
    return;
  }

  if (rooms[index] == 0)
  {
    rooms[index] = clientID;
    cout << "Room " << index << " reserved for client " << clientID << "." << endl;
  }
  else
  {
    cout << "Room " << index << " is already occupied." << endl;
  }
}

void resetRoom(int *rooms, int n, int index)
{
  if (index < 0 || index >= n)
  {
    cout << "Invalid room index." << endl;
    return;
  }

  rooms[index] = 0;
  cout << "Room " << index << " has been reset." << endl;
}

void resetRoomsByClient(int *rooms, int n, int clientID)
{
  bool anyReset = false;
  for (int i = 0; i < n; ++i)
  {
    if (rooms[i] == clientID)
    {
      rooms[i] = 0;
      anyReset = true;
    }
  }

  if (anyReset)
  {
    cout << "All rooms for client " << clientID << " have been reset." << endl;
  }
  else
  {
    cout << "No rooms found for client " << clientID << "." << endl;
  }
}

void printStatus(int *rooms, int n)
{
  int occupiedCount = 0;

  cout << "Room statuses:" << endl;
  for (int i = 0; i < n; ++i)
  {
    if (rooms[i] != 0)
    {
      cout << "Room " << i << ": Occupied by client " << rooms[i] << endl;
      ++occupiedCount;
    }
    else
    {
      cout << "Room " << i << ": Free" << endl;
    }
  }

  cout << "Total occupied rooms: " << occupiedCount << endl;
}

int main()
{
  int n;
  cout << "Enter the number of rooms in the hotel: ";
  cin >> n;

  int *rooms = new int[n];
  for (int i = 0; i < n; ++i)
  {
    rooms[i] = 0;
  }

  while (true)
  {
    int command;
    cout << "\nEnter a command (0: Exit, 1: Reserve, 2: Reset Room, 3: Reset by Client, 4: Print Status): ";
    cin >> command;

    switch (command)
    {
    case 0:
      greetAndExit();
      delete[] rooms;
      return 0;

    case 1:
    {
      int index, clientID;
      cout << "Enter room index and client ID to reserve: ";
      cin >> index >> clientID;
      reserveRoom(rooms, n, index, clientID);
      break;
    }

    case 2:
    {
      int index;
      cout << "Enter room index to reset: ";
      cin >> index;
      resetRoom(rooms, n, index);
      break;
    }

    case 3:
    {
      int clientID;
      cout << "Enter client ID to reset all rooms: ";
      cin >> clientID;
      resetRoomsByClient(rooms, n, clientID);
      break;
    }

    case 4:
      printStatus(rooms, n);
      break;

    default:
      cout << "Invalid command. Please try again." << endl;
    }
  }
}
