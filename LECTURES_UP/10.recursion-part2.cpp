#include <iostream>
#include <string> // за една от задачите на математиците

using namespace std;

// n-то число на Фибоначи - вариант с нелинейна рекурсия:
/*
int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
*/

// Понеже горното решение е неефективно, ще направим с линейна рекурсия.
// Нека първо да видим нерекурсивно решение - с цикъл:
int fibonacciNonrecursive(int n)
{
    if (n <= 1)
        return n;

    int preLast = 0, last = 1;
    for (int i = 1; i < n; i++)
    {
        int next = preLast + last;
        preLast = last;
        last = next;
    }
    return last;
}

// Рекурсивно решение, но този път с линейна рекурсия:
// Помощна функция:
int fibonacciHelper(int n, int preLast, int last)
{
    if (n == 0)
        return preLast;

    return fibonacciHelper(n - 1, last, preLast + last);
}
// Ето това вече е "официалната" функция - ще викаме нея, а горната е помощна:
int fibonacci(int n)
{
    return fibonacciHelper(n, 0, 1);
}

/*
вариант за математиците:
#include <string>
double evaluate(string expression, int &index)
{
    if (expression[index] >= '0' && expression[index] <= '9')
    {
        double result = expression[index] - '0';
        index++;
        return result;
    }

    // щом не е цифра, значи е лява скоба
    index++; // прескачаме лявата скоба
    double leftValue = evaluate(expression, index);

    char operation = expression[index];
    index++;

    double rightValue = evaluate(expression, index);
    index++; // прескачаме дясната скоба

    switch (operation)
    {
        case '+': return leftValue + rightValue; // в случая може без break
        case '-': return leftValue - rightValue;
        case '*': return leftValue * rightValue;
        case '/': return (double) leftValue / rightValue;
    }
    return 0; // при коректен израз никога няма да стигаме дотук
}

double evaluate(string expression)
{
    int index = 0;
    return evaluate(expression, index);
}
*/

// Пресмятане на израз: Вариант за ИС
// Помощна функция:
bool isDigit(char character)
{
    return character >= '0' && character <= '9';
}
// Помощна функция: трябва да връща хем double стойност,
// хем и да променя позицията, от която трябва да продължим
double evaluateHelper(const char *expression, int &index)
{
    if (isDigit(expression[index]))
    {
        double value = expression[index] - '0';
        index++; // казваме, че сме прочели един символ
        return value;
    }

    // щом не е цифра, значи е лява скоба (приемаме, че изразът е коректен)
    // (<израз><операция><израз>)
    index++; // прескачаме лявата скоба
    double leftValue = evaluateHelper(expression, index);
    char operation = expression[index];
    index++; // прескачаме операцията
    double rightValue = evaluateHelper(expression, index);
    index++; // прескачаме дясната скоба

    switch (operation)
    {
        case '+': return leftValue + rightValue;
        case '-': return leftValue - rightValue;
        case '*': return leftValue * rightValue;
        case '/': return leftValue / rightValue;
    }

    return 0; // при коректен израз никога няма да стигаме дотук
}
// "Официална функция":
double evaluate(const char *expression)
{
    int index = 0;
    return evaluateHelper(expression, index);
}

// Задачи за лабиринт
// Ще ги представяме като булеви матрици. Нека true е проходимо квадратче,
// а false - непроходимо. Нека от дадено квадратче можем да стъпваме
// в друго, което има обща стена.
// Пример:
const int ROWS = 6, COLUMNS = 4;
bool labyrinth[ROWS][COLUMNS] = {
    {1, 0, 1, 0},
    {1, 1, 1, 1},
    {0, 1, 0, 1},
    {1, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 0, 1, 1}
};

// Задача. Да се провери дали има път (ацикличен) в лабиринт между дадени две квадратчета.
bool hasWay(int startRow, int startColumn, int endRow, int endColumn)
{
    // ако сме извън лабиринта
    if (startRow < 0 || startColumn < 0 || startRow >= ROWS || startColumn >= COLUMNS)
        return false;

    // ако текущото квадратче е непроходимо
    if (!labyrinth[startRow][startColumn])
        return false;

    // ако началното квадратче съвпада с крайното, значи има път
    if (startRow == endRow && startColumn == endColumn)
        return true;

    // маркираме текущото квадратче като непроходимо,
    // за да не можем да минем повторно през него.
    // Така разваляме лабиринта, така че при нужда трябва да измислим
    // по-хубаво решение.
    labyrinth[startRow][startColumn] = false;

    return hasWay(startRow + 1, startColumn, endRow, endColumn) // търсим път от долното квадратче
        || hasWay(startRow - 1, startColumn, endRow, endColumn) // търсим път от горното
        || hasWay(startRow, startColumn - 1, endRow, endColumn) // от лявото
        || hasWay(startRow, startColumn + 1, endRow, endColumn); // от дясното
}

// Задача. Да се намерят ВСИЧКИ пътища в лабиринт между дадени две квадратчета.
int path[1000][2]; // таблица с 2 колони, всеки ред съдържа номер на
                    // ред и номер на стълб на поредното квадратче
int pathLength = 0;

void findAllWays(int startRow, int startColumn, int endRow, int endColumn)
{
    // ако сме извън лабиринта
    if (startRow < 0 || startColumn < 0 || startRow >= ROWS || startColumn >= COLUMNS)
        return;

    // ако текущото квадратче е непроходимо
    if (!labyrinth[startRow][startColumn])
        return;

    // добавяме текущото квадратче в досега намерения път:
    path[pathLength][0] = startRow;
    path[pathLength][1] = startColumn;
    pathLength++;

    // ако началното квадратче съвпада с крайното, значи има път
    if (startRow == endRow && startColumn == endColumn)
    {
        // отпечатваме пътя, по който сме стигнали дотук:
        for (int i = 0; i < pathLength; i++)
            cout << "(" << path[i][0] << ", " << path[i][1] << ") ";
        cout << endl;
        // премахваме текущото квадратче от пътя:
        pathLength--;
        return;
    }

    labyrinth[startRow][startColumn] = false;

    findAllWays(startRow + 1, startColumn, endRow, endColumn);
    findAllWays(startRow - 1, startColumn, endRow, endColumn);
    findAllWays(startRow, startColumn - 1, endRow, endColumn);
    findAllWays(startRow, startColumn + 1, endRow, endColumn);

    labyrinth[startRow][startColumn] = true; // възстановяваме квадратчето

    // премахваме текущото квадратче от пътя:
    pathLength--;
}

// Ако искаме да намерим най-краткия път между две квадратчета, възможен
// неефективен начин е да използваме findAllWays. Ще пазим най-краткия до
// момента път в нов масив shortestPath. Всеки път, когато намерим нов път,
// вместо да го отпечатваме, ще го сравняваме дали е по-къс от досегашния
// най-къс. Трябва ни и булева променлива, с която да указваме дали е намерен
// изобщо някакъв път.

bool findWay(int startRow, int startColumn, int endRow, int endColumn)
{
    // ако сме извън лабиринта
    if (startRow < 0 || startColumn < 0 || startRow >= ROWS || startColumn >= COLUMNS)
        return false;

    // ако текущото квадратче е непроходимо
    if (!labyrinth[startRow][startColumn])
        return false;

    // добавяме текущото квадратче в пътя:
    path[pathLength][0] = startRow;
    path[pathLength][1] = startColumn;
    pathLength++;

    // ако сме стигнали целта
    if (startRow == endRow && startColumn == endColumn)
    {
        // отпечатваме пътя, по който сме стигнали дотук:
        for (int i = 0; i < pathLength; i++)
            cout << "(" << path[i][0] << ", " << path[i][1] << ") ";
        cout << endl;
        // премахваме текущото квадратче от пътя:
        pathLength--;
        return true;
    }

    labyrinth[startRow][startColumn] = false;

    bool result = findWay(startRow + 1, startColumn, endRow, endColumn)
        || findWay(startRow - 1, startColumn, endRow, endColumn)
        || findWay(startRow, startColumn - 1, endRow, endColumn)
        || findWay(startRow, startColumn + 1, endRow, endColumn);

    labyrinth[startRow][startColumn] = true; // възстановяваме квадратчето

    // премахваме текущото квадратче от пътя:
    pathLength--;

    return result;
}

// Задача: да се намери най-краткият път между дадени две квадратчета.
// Възможно решение: почти същото като функцията findAllWays, само че
// всеки път, когато намерим нов път, ще го сравняваме по дължина с
// до момента най-краткия (който ще се пази в друг масив) и ако е по-къс,
// ще го присвоим на най-краткия до момента.

// Варианти на горните задачи: ходовете могат да бъдат ходове на коня.

int main()
{
    for (int i = 0; i < 10; i++)
        cout << fibonacci(i) << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        cout << fibonacciNonrecursive(i) << " ";
    cout << endl;

    cout << evaluate("5") << endl;
    cout << evaluate("(2+2)") << endl;
    cout << evaluate("(3*(2+2))") << endl;

    // има ли път от горното ляво до долното дясно квадратче?
    // cout << hasWay(0, 0, 5, 3) << endl;

    cout << "All possible ways:" << endl;
    findAllWays(0, 0, 5, 3);

    pathLength = 0; // изтриваме резултата от горната функция

    cout << "First found way:" << endl;
    findWay(0, 0, 5, 3);

    return 0;
}
