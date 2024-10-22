// Въвеждане на ЕГН и заменяне на първите 7 цифри със *

#include <iostream>
using namespace std;

int main()
{
  string ID;

  do
  {
    cout << "Enter your ID (10 chars): ";
    cin >> ID;

    if (ID.length() != 10)
    {
      cout << "Please enter a valid ID (10 chars)" << endl;
    }

  } while (ID.length() != 10);

  for (int i = 0; i < 7; i++)
  {
    ID.replace(i, 1, "*");
  }

  cout << "Your encrypted ID: " << ID << endl;

  return 0;
}
