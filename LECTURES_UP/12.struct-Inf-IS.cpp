#include <iostream>
#include <cstring>
using namespace std;

/*
Да се напише програма, която:
Въвежда масив от студенти
Извежда списък на скъсаните студенти
Намира средния успех на всички студенти
Подрежда студентите по факултетен номер
*/

struct Student
{
    char name[50];
    int fn;
    double grade;
};

Student readStudent()
{
    Student student;

    cout << "Name: ";
    cin.ignore();
    cin.getline(student.name, 50);

    cout << "Faculty Number: ";
    cin >> student.fn;

    cout << "Grade: ";
    cin >> student.grade;

    return student;
}

/*
int readStudents(Student array[])
{
    int count;
    cout << "Number of students: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        array[i] = readStudent();
    }

    return count;
}
*/

void sortByFN(Student array[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < count; j++)
        {
            if (array[j].fn < array[minIndex].fn)
                minIndex = j;
        }
        Student temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

// сортиране по две полета, например сортиране по успех в намаляващ ред, а студенти с еднакъв успех да бъдат сортирани по ф.н. в нарастващ:
//    int maxIndex = i;
//    for (int j = i + 1; j < count; j++)
//      if (students[j].grade > students[maxIndex].grade
//        || (students[j].grade == students[maxIndex].grade && students[j].fn < students[maxIndex].fn))

void printStudent(Student student) // const Student & , ако искаме да не се правят излишни копирания на записите при подаването им като параметри
{
    cout << student.fn << ' ' << student.name << ": " << student.grade << endl;
}

void print(Student array[], int count)
{
    for (int i = 0; i < count; i++)
        printStudent(array[i]);
}

int main()
{
    Student group[100];
    int numberOfStudents;
    // numberOfStudents = readStudents(group);
    cout << "Number of students: ";
    cin >> numberOfStudents;
    for (int i = 0; i < numberOfStudents; i++)
    {
        group[i] = readStudent();
    }

    cout << "Failed:" << endl;
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (group[i].grade < 3)
            cout << group[i].fn << ' ' << group[i].name << endl;
    }

    if (numberOfStudents > 0)
    {
        double sumOfGrades = 0;
        for (int i = 0; i < numberOfStudents; i++)
        {
            sumOfGrades += group[i].grade;
        }
        cout << "Average grade: " << sumOfGrades / numberOfStudents << endl;
    }

    sortByFN(group, numberOfStudents);

    cout << "Sorted list:" << endl;
    print(group, numberOfStudents);

    return 0;
}

