#include <iostream>

using namespace std;

// Нещо като справочник за функции:

int f(  // така връщаме един резултат от примитивен тип (в случая int)
        int i, bool b, char c, // така подаваме параметри от примитивен тип
        const double array[], int count, // така подаваме масив, който няма да бъде променян
        double array2[], int count2, // така подаваме масив, който ще бъде променян
        const float matrix[][4], int rows, // матрица с 4 стълба
        const char *string, // символен низ, който няма да бъде променян
        int *pointer, // указател

        double *x, double *y, // така връщаме повече от една стойност
        int &xx, int &yy, // може и така
        double array3[], int &count3, // така връщаме масив
        float matrix3[][4], int &rows3, // така връщаме двумерен масив с 4 стълба
        char *string3 // така връщаме низ
       )
{
    return 49302453;
}

int main()
{

    // Примери от теоретичния тест от минали години:

    // Какво ще отпечата следният код:
    int a = 5, b = a + !a, c = b % a;
    double d = a / (2 + c);
    cout << d << endl;

    // ако искаме да получим все пак дробно число:
    d = (double) a / (2 + c); // лявата част (a) се преобразува в double


    double dbl;
    int in = 3.14159;
    dbl = in;
    cout << dbl;
    
    // Следните два оператора са еквивалентни:
    // a = b > 0 ? c : d;
    // a = b <= 0 ? d : c;

    // Какво ще отпечата следният код:
    a = 5;
    switch (a)
    {
        case 1: cout << 1;
        case 5:
        case 6: cout << 2;
        default: cout << 3;
        case 2: cout << 4;
    }
    cout << endl;

    if (a = c) cout << "Yes\n"; else cout << "No\n";
    // понеже c = 0, отпечатва No и може дори да не забележим грешката.
    // трябваше да е a == c
    
    // Кои от следните твърдения са верни? (Твърденията са взети от различни въпроси)

    // *p += 10; никога няма да предизвика програмна
    // грешка, независимо от стойността на указателя p

    // char name[100] = "Pesh";
    // strcat(name, 'o'); добавя буква в края на символен низ

    // Да се напише поредица от if-ове, еквивалентни на:
    swtich (x)
    {
        case 1 : y ++;
        case 2 : y = 2;
        case 3 : y -= 3; break ;
        default : y *= x;
    }

    if (x == 1 || x == 2 || x == 3)
    {
        if (x == 1) y++;
        if (x == 1 || x == 2) y = 2;
        y -= 3;
    }
    else
        y *= x;
    // или:
    if (x == 1)
    {
        y++; y = 2; y -= 3;
    }
    else if (x == 2)
    {
        y = 2; y -= 3;
    }
    else if (x == 3)
    {
        y -= 3;
    }
    else
    {
        y *= x;
    }


    // Да се напише for цикъл, еквивалентен на дадения while цикъл:
    bool flag = true;
    int i = 0;
    while (i < 5 && flag)
    {
        cout << i;
        i++;
    }
    // отговор:
    for (int i = 0; i < 5 && flag; i++)
    {
        cout << i;
    }

    // Безкраен ли е следният цикъл?
    //     for (int i = 0; 1 < 10; ++i);
    // Да. 1 винаги е по-малко от 10.

    return 0;
}
