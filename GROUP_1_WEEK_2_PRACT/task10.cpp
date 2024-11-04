// Влади е студент, живее в София и си ходи от време на време до родния град. Той е много запален по волейбола, но е зает през работните дни и играе волейбол само през уикендите и в празничните дни. Влади играе в София всяка събота, когато не е на работа и не си пътува до родния град, както и в 2/3 от празничните дни. Той пътува до родния си град h пъти в годината, където играе волейбол със старите си приятели в неделя. Влади не е на работа 3/4 от уикендите, в които е в София. Отделно, през високосните години Влади играе с 15% повече волейбол от нормалното. Приемаме, че годината има точно 48 уикенда, подходящи за волейбол.

// Напишете програма, която изчислява колко пъти Влади е играл волейбол през годината. Закръглете резултата надолу до най-близкото цяло число (напр. 2.15 -> 2; 9.95 -> 9).

// Входните данни се четат от конзолата:

// Първият ред съдържа буква "L" (високосна година) или "N" (нормална година с 365 дни).

// Вторият ред съдържа цялото число p – брой празници в годината (които не са събота или неделя).

// Третият ред съдържа цялото число h – брой уикенди, в които Влади си пътува до родния град.

// Примерен вход: L 5 2

// Изход: 45

// Примерен вход: N 3 2

// Изход: 38

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  char yearType;
  int p, h;
  cout << "Please enter L for (leap year) or N (for non-leap year), amount of holidays and amount of weekends in which Vladi travels to his hometown: ";
  cin >> yearType >> p >> h;

  int timesPlayedInHolidays = floor(p * 2 / 3);    // 2/3 of holidays
  int timesPlayedInHometown = h;                   // all weekends spent in hometown (only Sundays)
  int timesPlayedInCity = floor((48 - h) * 3 / 4); // 3/4 of weekends in the city

  // Total games played
  int totalTimesPlayed = timesPlayedInHolidays + timesPlayedInHometown + timesPlayedInCity;

  if (yearType == 'L')
    totalTimesPlayed = floor(totalTimesPlayed * 1.15);

  cout << "Total times played: " << totalTimesPlayed << endl;

  return 0;
}
