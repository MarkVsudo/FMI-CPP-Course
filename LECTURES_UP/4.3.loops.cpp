#include <iostream>
using namespace std;

int main()
{
    // Да се намерят първите k естествени числа, по-големи от дадено n,
    // чиято сума на цифрите се дели на 7.
/*
    int n, k;
    cin >> n >> k;

    int count = 0, current = n + 1;
    while (count < k)
    {
        int sum = 0;
        int currentCopy = current;
        while (currentCopy != 0)
        {
            sum += currentCopy % 10;
            currentCopy /= 10;
        }

        if (sum % 7 == 0)
        {
            count++;
            cout << current << " ";
        }

        current++;
    }
*/

    // Да се провери дали в даден интервал [a, b] съществува цяло число,
    // чиято сума от цифрите се дели на 7.
/*
    bool flag = false;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b && !flag; i++)
    {
        int sum = 0;
        int copy = i;
        while (copy)
        {
            sum += copy % 10;
            copy /= 10;
        }

        if (sum % 7 == 0)
            flag = true;
    }

    cout << (flag ? "Yes" : "No") << endl;
*/

    // Зад. Да се провери дали всички четни числа в даден интервал
    // съдържат нечетна цифра
/*
    int a, b;
    cin >> a >> b;
    bool flag = true; // когато решаваме задача за всяко,
        // в началото приемаме, че условието е изпълнено за всички
    for (int i = (a % 2 == 0 ? a : a + 1); i <= b && flag; i += 2)
    {
        bool flag2 = false; // можеше и без втори флаг, но ще е по-оплетено
        int copy = i; // може и да махнем последната цифра
        while (copy != 0 && !flag2)
        {
            if (copy % 10 % 2 == 1) // може и по-просто: copy % 2 == 1
                flag2 = true;
            copy /= 10;
        }

        if (!flag2) // числото i не съдържа нечетна цифра
            flag = false;
    }
    cout << flag << endl;
*/


    // Дали цифрите на едно естествено число са различни

    // Когато проверявахме дали всички цифри са еднакви, беше
    // достатъчно с един цикъл да проверим дали всяка цифра е равна
    // на тази до нея; тук не е достатъчно, например за 121.

    // Алгоритъм:
    // Обхождаме числото отдясно наляво, както си знаем.
    // За всяка цифра проверяваме дали се съдържа сред цифрите вляво от нея.
    // Ако се съдържа, значи числото не е с различни цифри.
    // Ако за всяка цифра е вярно, че не се съдържа, значи е с различни.
/*
    int number;
    cin >> number;

    bool flag = true;
    while (number >= 10 && flag) // за най-лявата цифра няма какво да
        // проверяваме, понеже вляво от нея няма други цифри.
        // Ако числото е едноцифрено, също няма за какво да го обхождаме
        // - за него автоматично е вярно, че е с различни цифри.
    {
        int currentDigit = number % 10;
        int otherDigits = number / 10; // цифрите вляво от текущата

        bool containsDigit = false;
        // не е задължително да ползваме втори флаг
        do
        {
            if (currentDigit == otherDigits % 10)
                containsDigit = true; // ИЛИ flag = false;
            otherDigits /= 10;
        }
        while (otherDigits != 0 && !containsDigit); // ИЛИ && flag

        if (containsDigit) // ако няма втори флаг, тези два реда са излишни
            flag = false;

        number /= 10;
    }

    cout << (flag ? "Yes" : "No") << endl;
*/

    return 0;
}

