#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  double a, b;

  cin >> a;
  cin >> b;

  int years = 0;

  while (b >= a) {
    a *= 3;
    b *= 2;
    years++;
  }

  cout << years << endl;
}