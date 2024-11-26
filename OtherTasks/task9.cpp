#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x1, y1, r1, x2, y2, r2;
  cout << "Въведете x1, y1 и r1 за първата окръжност: ";
  cin >> x1 >> y1 >> r1;
  cout << "Въведете x2, y2 и r2 за втората окръжност: ";
  cin >> x2 >> y2 >> r2;

  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  if (distance > r1 + r2)
  {
    cout << "Окръжностите нямат общи точки." << endl;
  }
  else if (distance == r1 + r2)
  {
    cout << "Окръжностите се допират външно." << endl;
  }
  else if (distance < fabs(r1 - r2))
  {
    cout << "Едната окръжност е вложена в другата." << endl;
  }
  else if (distance == fabs(r1 - r2))
  {
    cout << "Окръжностите се допират вътрешно." << endl;
  }
  else
  {
    cout << "Окръжностите се пресичат." << endl;
  }

  return 0;
}
