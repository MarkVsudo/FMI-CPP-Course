#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    for (int i = 0; i < 2 * (n - 2) + 1; i++)
    {

        for (int j = 0; j < 2 * n - 1; j++)
        {
            if (j == 0 || j == 2 * n - 2)
            {
                cout << "*";
            }

            if (j == 1)
            {
                cout << "\\";
            }

            if (j == 2 * n - 3)
            {
                cout << "/";
            }
        }

        cout << endl;
    }
    return 0;
}