#include <iostream>

using namespace std;

int main()
{
  int n, i, solved = 0;

  cin >> n;

  for (i = 0; i < n; i++)
  {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b + c >= 2)
    {
      solved++;
    }
  }

  cout << solved << endl;
}