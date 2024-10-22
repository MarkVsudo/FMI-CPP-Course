// 4. Програма, която конвертира секунди в дни, часове, минути и секунди

#include <iostream>
using namespace std;

int main()
{
  long totalSeconds;

  // Въвеждане на броя секунди от потребителя
  cout << "Enter the number of seconds: ";
  cin >> totalSeconds;

  // Изчисляваме дните, часовете, минутите и секундите
  long days = totalSeconds / 86400; // 1 ден = 86400 секунди
  totalSeconds %= 86400;            // Остатъкът след делене на 86400

  long hours = totalSeconds / 3600; // 1 час = 3600 секунди
  totalSeconds %= 3600;             // Остатъкът след делене на 3600

  long minutes = totalSeconds / 60; // 1 минута = 60 секунди
  long seconds = totalSeconds % 60; // Остатъкът са секунди

  // Отпечатване на резултатите
  cout << "Days: " << days << ", Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << endl;

  return 0;
}
