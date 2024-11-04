// По въведен символ между a и z или A и Z да се определи главна ли е буквата или малка

// Примерен изход при а: Lower case letter

// Примерен изход при t: Lower case letter

// Примерен изход при T: Upper case letter

// Примерен при 8: The character is NOT a letter. След като решите задачата може вместо да изписва каква е буквата да я т рансформирате в нейната главна/малка (Ако не е буква пак да изписва, че има грешка)

#include <iostream>
using namespace std;

int main()
{
  char ch;

  cout << "Enter a character: ";
  cin >> ch;

  if (ch >= 'a' && ch <= 'z')
  {
    cout << "Lower case letter" << endl;
    // Convert to uppercase
    char upperCh = ch - ('a' - 'A');
    cout << "Converted to upper case: " << upperCh << endl;
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    cout << "Upper case letter" << endl;
    // Convert to lowercase
    char lowerCh = ch + ('a' - 'A');
    cout << "Converted to lower case: " << lowerCh << endl;
  }
  else
  {
    cout << "The character is NOT a letter" << endl;
  }

  return 0;
}
