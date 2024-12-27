#include <iostream>
#include <cstring>

using namespace std;

// Рекурсия:

// Факториел:
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

// Повдигане на степен:
double power(double base, int exponent)
{
    if (exponent == 0)
        return 1; // дъно

    if (exponent < 0)
        return 1.0 / power(base, -exponent);

    return base * power(base, exponent - 1);
}

// Най-голям общ делител (НОД) на 2 ест. числа
// Въпреки че виждаме две извиквания на същата функция, тя използва
// линейна рекурсия, понеже се изпълнява най-много едно от 2-те обръщения.
int gcd(int a, int b)
{
    if (a == 0 || a == b) // това с нулите го нямаше в презентацията, засега може и без него, ако ни плаши
        return b;
    if (b == 0)
        return a;
    if (a > b)
        return gcd(a - b, b);
    // a < b, понеже вече имаше проверка a == b
    return gcd(a, b - a);
}

// Функция, която отпечатва двоичния запис на дадено естествено число:
void printBinary(int number)
{
    if (number >= 2)
    {
        printBinary(number / 2);
    }
    cout << number % 2;
}

void printHex(int number)
{
    if (number >= 16)
        printHex(number / 16);

    int lastHexDigit = number % 16;
    if (lastHexDigit < 10)
        cout << lastHexDigit;
    else
        cout << (char)('A' + lastHexDigit - 10);
}

// Примери за масиви:

// 1. Сума на елементите на масив от double:
double sum(const double array[], int count)
{
    if (count == 0) // дъно - при празен масив
        return 0;
    return sum(array, count - 1) + array[count - 1]; // сума на всички елементи без последния    
    // или:
    // return array[0] + sum(array + 1, count - 1); // сума на всички елементи без първия
}

// 2. Проверка дали съществува елемент с дадена стойност:
bool contains(const double array[], int count, double element)
{
    if (count == 0) return false;
    if (array[count - 1] == element) return true;
    return contains(array, count - 1, element);

/* последните 2 случая могат да се заменят с:
    return array[count - 1] == element || contains(array, count - 1, element);
    // нека си припомним една оптимизация, която получаваме наготово: ако лявата страна на дизюнкцията стане true,
    // дясната няма да се изчислява, т.е. функцията ще спре веднага щом
    // намери търсения елемент.
*/
}

// ако търсим индекса на последното срещане на даден елемент:
int lastIndexOf(const double array[], int count, double element)
{
    if (count == 0)
        return -1;

    if (array[count - 1] == element)
        return count - 1;

    return lastIndexOf(array, count - 1, element);
}

// ако търсим указател към първото срещане на даден елемент:
double *find(double array[], int count, double element)
{
    if (count == 0)
        return NULL;

    if (array[0] == element)
        return array;

    return find(array + 1, count - 1, element);
}

// 3. Проверка за строго монотонно нарастване:
bool isAscending(double array[], int count)
{
    if (count <= 1) // при празен масив и при такъв с 1 елемент приемаме, че е вярно
        return true;
    if (array[0] >= array[1]) // първият елемент е по-голям или равен на втория - значи не е вярно, че редицата е строго монотонно нарастваща
        return false;
    return isAscending(array + 1, count - 1);
    // return array[0] < array[1] && isAscending(array + 1, count - 1);
}

// 4. Проверка дали всички елементи са различни:
bool areDifferent(double array[], int count)
{
    if (count <= 1)
        return true;
    if (contains(array + 1, count - 1, array[0]))
        return false;
    return areDifferent(array + 1, count - 1);
}

// Рекурсивна функция, която по даден масив от цели
// числа проверява дали всички положителни числа в този
// масив са четни:
bool arrAllPositiveNumbersEven(int array[], int count)
{
    if (count == 0)
        return true;

    if (array[0] <= 0)
        return arrAllPositiveNumbersEven(array + 1, count - 1);

    return array[0] % 2 == 0 && arrAllPositiveNumbersEven(array + 1, count - 1);
}

// Рекурсивна функция, която по дадени два символни
// низа проверява дали първият започва с втория,
// например "Hello" започва с "hell". Да се игнорират
// разликите между главни и малки букви.
char toLower(char c) // помощна функция
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}
bool startsWith(const char *str, const char *substr)
{
    if (substr[0] == '\0')
        return true;

    if (str[0] == '\0')
        return false;

    return toLower(str[0]) == toLower(substr[0])
        && startsWith(str + 1, substr + 1);
}

int main()
{
    cout << fact(4) << endl;

    cout << power(2, 10) << endl;
    cout << power(2, 8) << endl;

    cout << gcd(8, 12) << endl;
    cout << gcd(8, 0) << endl;

    printBinary(6);
    cout << endl;

    double array[] = {3.2, 2.88, 1.3482, -5.34};
    cout << sum(array, 4);

    cout << startsWith("ABc", "ab") << endl;

    return 0;
}
