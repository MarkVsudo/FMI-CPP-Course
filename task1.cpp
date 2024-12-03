#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void fillArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] ";
        cin >> arr[i];
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void printReversedArr(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

int main()
{

    int arr[100], n;

    cout << "Enter n: ";
    cin >> n;

    fillArr(arr, n);
    cout << "--- Unsorted array ---\n";
    printArr(arr, n);
    bubbleSort(arr, n);
    cout << "--- Sorted array ---\n";
    printArr(arr, n);
    cout << "--- Reversed sorted array ---\n";
    printReversedArr(arr, n);

    return 0;
}