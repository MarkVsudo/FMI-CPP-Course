#include <iostream>
#include <cstring>

// Версия за спец. Информатика и ИС!

using namespace std;

// Преобразува главна английска буква в малка
char toLowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}

char toUpperCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

// трябва ни за примера с нумерологията
int findDigitalRoot(int number)
{
    int result = number % 9;
    if (result == 0) result = 9; // можеше и if (!result)
    return result;
}

// Функция, която проверява дали в даден израз скобите са използвани правилно:
bool checkBrackets(const char *expression)
{
    int balance = 0;
    for (int i = 0; expression[i] != '\0'; i++)
        if (expression[i] == '(') balance++; // лява скоба - увеличава брояча
        else if (expression[i] == ')') // дясна скоба - намаляваме брояча
        {
            balance--;
            if (balance < 0) // имаме ")", но няма "(" преди нея, която да й съответства
                return false;
        }
    return balance == 0; // ако броят на левите скоби е равен на броя на десните, връщаме true
}

// Преобразуване на стринг, съдържащ 10-ичното представяне на цяло число,
// в цяло число, например "123" -> 123
int parse(const char *string)
{
    int result = 0;
    for (int i = 0; string[i]; i++)
    {
        int digit = string[i] - '0'; // '0' -> 0, '1' -> 1 и т.н.
        result = result * 10 + digit; // избутваме досегашните цифри наляво
                    // и слагаме новата цифра в десния край
    }
    return result;
}

// Преобразуване от число към стринг:
int digitsCount(int number) // помощна функция
{
    int result = 0;
    do
    {
        result++;
        number /= 10;
    }
    while (number != 0);
    return result;
}
void toString(int number, char *string)
{
    int count = digitsCount(number);
    string[count] = '\0'; // когато сами си правим стринг, не трябва
            // да забравяме нулата накрая!
    do
    {
        int currentDigit = number % 10;
        count--;
        string[count] = '0' + currentDigit;
        number /= 10;
    }
    while (number);
}

// Функция, която добавя даден символ към края на даден низ
// ГРЕШНО решение от някои студенти от КН:
void addCharWrong(char *string, char symbol) {
    string[strlen(string)] = symbol;
    string[strlen(string) + 1] = '\0';
}

// Едно вярно решение
void addChar(char *string, char symbol) {
    int length = strlen(string);
    string[length] = symbol;
    string[length + 1] = '\0';
}

// Поука: когато конструираме стрингове символ по символ или променяме
// отделни символи, трябва да сме сигурни, че стрингът ще има '\0' накрая!
// Ако работим само с функциите от cstring, тогава няма такъв проблем.

int main()
{
/*
    char c = 'M';
    cout << c << endl; // отпечатва M (без кавички)
    c = '\n';
    cout << c; // отпечатва нов ред, а не \n
    cout << "=========" << endl;

    cin >> c;
    cout << "You entered: " << c << endl;

    c = 'A';
    c += 3;
    cout << c << endl;
    cout << c + 1 << endl;
    cout << (char)(c + 1) << endl;
    cout << (int)c << endl; // ASCII кода на даден символ

    cout << toLowerCase('D') << endl;
*/

    // Символни низове / стрингове:

/*
    // представяне в паметта:
    char string[10] = "ABC";
    cout << (int)string[0] << endl
        << (int)string[1] << endl
        << (int)string[2] << endl
        << (int)string[3] << endl;

    // дефиниране на стринг:
    // от масивите знаем това:
    char s1[10] = {'H', 'e', 'l', 'l', 'o', '\0'}; // не пишете така, няма смисъл!
    // има много по-хубав начин:
    char s2[10] = "Hello";
    char s3[] = "Hello"; // ще се заделят 6 байта

    // отпечатване на екрана:
    // от масивите знаем това:
    int index = 0;
    while (s1[index] != '\0')
    {
        cout << s1[index];
        index++;
    }
    // има много по-хубав начин:
    cout << s1; // вместо да отпечата адреса, отпечатва самия низ

    // Четене от клавиатурата:
    char str[100];
    cin >> str; //чете до първо срещане на интервал, нов ред или табулация
    cin.getline(str, 100); //до 99 знака (включително интервали...), спира при Enter
*/

/*
    // Пример - нумерология:
    char name[100];
    cout << "Enter your name: ";
    cin >> name;

    int magicalNumber = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
    	char currentChar = toLowerCase(name[i]); // за да ни е по-лесно, работим само с малки букви
    	if (currentChar >= 'a' && currentChar <= 'z')
    	{
		int letterIndex = currentChar - 'a' + 1; // a->1, b->2, ...
		magicalNumber += findDigitalRoot(letterIndex);
        }
    }
    // тук по-скоро трябва да намерим сумата на цифрите, но за по-лесно пишем това:
    magicalNumber = findDigitalRoot(magicalNumber);

    cout << "Your magical number is " << magicalNumber << endl;

    switch (magicalNumber)
    {
        case 1: cout << "You are kind and peaceful." << endl; break;
        case 2: cout << "You are friendly, charming, and kind." << endl; break;
        case 3: cout << "You get along with almost anyone." << endl; break;
        case 4: cout << "You try hard not to rub people the wrong way." << endl; break;
        case 5: cout << "You know how to bring people together." << endl; break;
        case 6: cout << "Sometimes, you are a bit superficial and irresponsible." << endl; break;
        case 7: cout << "You are wild, crazy, and a true rebel." << endl; break;
        case 8: cout << "You have always stuff to do." << endl; break;
        case 9: cout << "You are full of energy and most people have a hard time interacting with you because you are so demanding." << endl; break;
    }

    cout << "Your bill is: $100" << endl;
*/

/*
    // Хистограма:
    char string[100];
    cin.getline(string, 100);

    int histogram[256] = {0}; // за всеки код от 0 до 255 ще пазим колко често се среща
    for (int i = 0; string[i]; i++)
        histogram[(int)string[i]]++; // можеше да напишем string[i], но не е нужно

    for (int i = 0; i < 256; i++)
        cout << (char)i << ": " << histogram[i] << "\t";
        // \t ще отмести курсора до началото на следващата колона на екрана
*/

/*
    char expression[] = "123)(456";
    cout << checkBrackets(expression) << endl;
*/

/*
    cout << parse("123") * 2 << endl;

    char digits[10];
    toString(123, digits);
    cout << digits << endl;
*/

    // библиотека cstring
/*
    char s[10] = "Hello";
    // Дължина на низ:
    cout << strlen(s) << endl; // \0 не се брои
    // cout << sizeof(s); << endl; //НЕ!

    // Копиране на низове:
    char src[10] = "FMI", dest[15];
    // dest = src; dest = "something"; //Грешно!
    strcpy(dest, src);

    char str1[20] = "Hello";
    char str2[10] = "Hell";
    // Сравняване:
    // if (str1 == str2) {} //Не! Това сравнява адреси
    cout << strcmp(str1, str2) << endl; // положително число => str1 е след str2 в речника, напр. "ni6to" > "ne6to"
    strcat(str2, "o");
    cout << strcmp(str1, str2) << endl; // вече са равни, затова връща 0
    if (!strcmp(str1, str2)) cout << "Equal" << endl;

    // Конкатениране:
    strcat(str1, str2); //към str1 долепя str2
    // s = str1 + str2; str1 += str2; //не, не...

    // Трикчета с указатели (1):
    // На всяка функция, която приема като параметър стринг
    // (или масив), може да подадем не началото на стринга,
    // а да пропуснем първите му елементи.
    strcpy(dest, src + 3); //ако src="ne iskam", то dest="iskam"
    cout << (src + 2); //отпечатва стринга, но без първите му 2 символа
*/

/*
    char firstName[50], lastName[50], message[200];
    cin.getline(firstName, 50);
    cin.getline(lastName, 50);
    strcpy(message, "Hello, ");
    strcat(message, firstName);
    strcat(message, " ");
    strcat(message, lastName);
    strcat(message, "! Nice to meet you again!");
    cout << message << endl;
*/

/*
    // проблем, когато въвеждаме първо число, а после низ:
    cout << "Enter your age: ";
    int number;
    cin >> number;
    char string[10];
    cout << "Enter your name: ";
    cin.getline(string, 10);
    if (strlen(string) == 0)
        cout << "You entered an empty string!" << endl;
    // workaround:
    // преди cin.getline слагаме още един getline,
    // за да прескочим символа за нов ред
*/

/*
    char good[100] = "Hell";
    addCharWrong(good, 'o');
    cout << good << endl; // дотук добре

    char bad[100] = "aaaaaaaaaaaaaaaaaaa";
    strcpy(bad, "Hell");
    addCharWrong(bad, 'o');
    cout << bad << endl;

    char correct[100];
    strcpy(correct, "Hello");
    addChar(correct, 'o');
    cout << correct << endl;
*/

/*
    // Масиви от низове:
    // Задача: Да се въведе масив от думи с дължина до
    // 19 символа и да се конструира изречение от тях -
    // думите да се разделят с интервали, първата буква
    // да се направи главна и накрая да се сложи точка.
    char words[100][20];
    int count;
    cout << "How many words? ";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> words[i];
    }
    char sentence[2001] = ""; // (19 + 1) * 100 + 1
    for (int i = 0; i < count; i++)
    {
        strcat(sentence, words[i]);
        strcat(sentence, " ");
    }
    sentence[strlen(sentence) - 1] = '.';
    sentence[0] = toUpperCase(sentence[0]);
    cout << sentence << endl;
*/


    return 0;
}

