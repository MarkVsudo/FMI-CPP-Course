#include <iostream>

using namespace std;

// Чете цяло число от стандартния вход. Четенето продължава дотогава,
// докато не бъде въведено число в посочения интервал (включително).
int readInteger(int minValue, int maxValue)
{
    int number;
    cin >> number;
    while (number < minValue || number > maxValue)
    {
        cout << "Invalid value. Please enter a value between "
            << minValue << " and " << maxValue << ": ";
        cin >> number;
    }
    return number;
}

int toSeconds(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
}

int main()
{
    cout << "First moment:" << endl;
    cout << "Enter hours: ";
    int hoursStart = readInteger(0, 24);
    cout << "Enter minutes: ";
    int minutesStart = readInteger(0, 59);
    cout << "Enter seconds: ";
    int secondsStart = readInteger(0, 59);

    cout << "Second moment:" << endl;
    cout << "Enter hours: ";
    int hoursEnd = readInteger(0, 24);
    cout << "Enter minutes: ";
    int minutesEnd = readInteger(0, 59);
    cout << "Enter seconds: ";
    int secondsEnd = readInteger(0, 59);

    int totalSecondsStart = toSeconds(hoursStart, minutesStart, secondsStart);
    int totalSecondsEnd = toSeconds(hoursEnd, minutesEnd, secondsEnd);

    // ако вторият момент е преди първия, ще приемем, че е от следващия ден,
    // затова добавяме 24 часа към него:
    if (totalSecondsStart > totalSecondsEnd)
        totalSecondsEnd += toSeconds(24, 0, 0);

    int difference = totalSecondsEnd - totalSecondsStart;
    cout << difference << " seconds." << endl;

    return 0;
}
