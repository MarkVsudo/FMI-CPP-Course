// Индекс на телесната маса или body mass index (BMI) е показател, който служи за определяне на нормалното, здравословно тегло при хора с различен ръст и за определяне на затлъстяване или недохранване. Индексът на телесната маса се измерва в килограми на квадратен метър и се определя по следната формула:

// BMI = W / h*h, където
// W = телгото ви, h = височината ви

// Напишете програма, която по подадени тегло и височина смята BMI на човек.

// P.S: Индексът за нормално тегло е 18.5-24.9

#include <iostream>
using namespace std;

int main()
{
  double weight, height;

  cout << "Enter your weight (kg) and height (m): ";
  cin >> weight >> height;

  double formula = (weight / (height * height));

  cout << "Your body weight index is: " << formula << " | Normal index (18.5-24.9)" << endl;

  return 0;
}
