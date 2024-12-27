#include <iostream>
#include <cstring>
using namespace std;

// Три решения на следната задача за символни низове:
// Да се напише функция, която по дадени два символни низа проверява дали първият низ завършва с втория (напр. "abcd" завършва с "cd").

// Първо решение: нерекурсивно

bool endsWith(const char *string, const char *substring)
{
    int stringLength = strlen(string);
    int substringLength = strlen(substring);

    if (substringLength > stringLength)
    {
        return false;
    }

    for (int i = 0; i < substringLength; i++)
    {
        if (string[stringLength - substringLength + i] != substring[i])
        {
            return false;
        }
    }

    return true;
}

// Второ решение: нерекурсивно, използвайки готовите функции от cstring

bool endsWith2(const char *string, const char *substring)
{
    int stringLength = strlen(string);
    int substringLength = strlen(substring);

    if (substringLength > stringLength)
    {
        return false;
    }

    return !strcmp(string + stringLength - substringLength, substring);
}

// Трето решение: рекурсивно (по-конкретно проверката за еднаквост на два низа е рекурсивна)

bool equal(const char *string, const char *substring)
{
    if (*string == '\0' && *substring == '\0')
    {
        return true;
    }

    if (*string == '\0' || *substring == '\0')
    {
        return false;
    }

    return *string == *substring && equal(string + 1, substring + 1);
}

bool endsWithRecursive(const char *string, const char *substring)
{
    int stringLength = strlen(string);
    int substringLength = strlen(substring);

    if (substringLength > stringLength)
    {
        return false;
    }

    return equal(string + stringLength - substringLength, substring);
}

int main()
{
	cout << endsWith("abcd", "cd") << endl;
	return 0;
}

