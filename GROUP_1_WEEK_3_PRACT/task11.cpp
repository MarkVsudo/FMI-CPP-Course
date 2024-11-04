// Напишете програма, която по дадена от потребителя дата да пресмята колко дни са минали от началото на годината.
// Примерен изход при 22 10 2020: 296

// Примерен изход при 22 10 2019: 295

// Примерен изход при 18 7 2007: 199

// Примерен изход при 3 2 2013: 34

#include <iostream>
using namespace std;

int main()
{
  // 1 3 5 7 8 10 12 --> 31 days
  // 4 6 9 11 --> 30 days
  // 2 --> 28 days (not leap year)
  // 2 --> 29 days (leap year)

  int day, month, year;
  cout << "Enter day, month and year: ";
  cin >> day >> month >> year;

  int daysCount = 0;

  bool leap = year % 4 == 0 || (year % 100 == 0 && year % 400 == 0);

  for (int i = 1; i <= month; i++)
  {
    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    {
      // 31 days
      if (i == month)
        daysCount += day;
      else
        daysCount += 31;
    }
    else if (i == 4 || i == 6 || i == 9 || i == 11)
    {
      // 30 days
      if (i == month)
        daysCount += day;
      else
        daysCount += 30;
    }
    else
    {

      if (i == month)
      {
        daysCount += day;
      }
      else
      {
        if (leap)
          daysCount += 29;
        else
          daysCount += 28;
      }
    }
  }

  cout << "Days since the start of the year: " << daysCount;

  return 0;
}