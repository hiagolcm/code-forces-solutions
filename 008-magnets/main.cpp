#include <iostream>

using namespace std;

int main()
{
  int n, i, groups = 1;
  string last, current;

  cin >> n;
  getline(cin, last);
  getline(cin, last);

  for (i = 1; i < n; i++)
  {
    getline(cin, current);

    if (last[1] == current[0])
    {
      groups++;
    }

    last = current;
  }

  cout << groups << endl;

  return 0;
}