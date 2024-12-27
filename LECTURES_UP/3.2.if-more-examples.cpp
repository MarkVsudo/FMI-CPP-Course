#include <iostream>

using namespace std;

int main()
{
    // Задача. Валидация на дата:
/*
    cout << "Enter a date (day month year): ";

    int day, month, year;
    cin >> day >> month >> year;

    bool valid = true;

    if (month < 1 || month > 12 || day < 1)
        valid = false;
    else {
        bool leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

        int daysInMonth;
        switch (month) {
            case 4:
            case 6:
            case 9:
            case 11: daysInMonth = 30; break;
            case 2: // daysInMonth = 28;
                    // if (leap)
                    //    daysInMonth = 29;
                    daysInMonth = leap ? 29 : 28;
                    break;
            default: daysInMonth = 31; break;
        }

        if (day > daysInMonth)
            valid = false;
    }

    cout << (valid ? "Valid date" : "Invalid date") << endl;
*/


/*
    ГРЕШЕН ВАРИАНТ, но често срещан - не слагайте безразборно else:

    if (day < 1 || month < 1 || day > 31 || month > 12)
        valid = false;
    else
        valid = true;

    bool leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    int daysInMonth;
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11: daysInMonth = 30; break;
        case 2: daysInMonth = leap ? 29 : 28; break;
        default: daysInMonth = 31; break;
    }

    if (day > daysInMonth)
        valid = false;
    else
        valid = true;
*/


    // Задача. Бикове и крави:
    // Дадени са две 4-цифрени числа, всяко с различни цифри –
    // колко бика и колко крави има?
/*
    int firstNumber, secondNumber;
    cout << "Enter two four-digit numbers (each with different digits): ";
    cin >> firstNumber;
    int f1 = firstNumber / 1000,
        f2 = firstNumber / 100 % 10,
        f3 = firstNumber / 10 % 10,
        f4 = firstNumber % 10;
    if (firstNumber > 9999 || f1 == f2 || f1 == f3 || f1 == f4 || f2 == f3 || f2 == f4 || f3 == f4)
    {
        cout << "Invalid number." << endl;
    }
    else
    {
        cin >> secondNumber;
        int s1 = secondNumber / 1000,
            s2 = secondNumber / 100 % 10,
            s3 = secondNumber / 10 % 10,
            s4 = secondNumber % 10;

        if (secondNumber > 9999 || s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4)
        {
            cout << "Invalid number." << endl;
        }
        else
        {
            int bulls = 0;

            if (f1 == s1)
                bulls = bulls + 1;
            if (f2 == s2)
                bulls = bulls + 1;
            if (f3 == s3)
                bulls = bulls + 1;
            if (f4 == s4)
                bulls = bulls + 1;
            // или: bulls = (f1 == s1) + (f2 == s2) + ...

            cout << bulls << " bulls." << endl;

            int cows = 0;

            if (f1 == s2 || f1 == s3 || f1 == s4) // дали първата цифра на първото число се среща във второто
                cows = cows + 1;
            if (f2 == s1 || f2 == s3 || f2 == s4)
                cows = cows + 1;
            if (f3 == s1 || f3 == s2 || f3 == s4)
                cows = cows + 1;
            if (f4 == s1 || f4 == s2 || f4 == s3)
                cows = cows + 1;

            cout << cows << " cows." << endl;
        }
    }
*/
    return 0;
}
