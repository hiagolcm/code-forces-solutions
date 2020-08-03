#include <iostream>

using namespace std;

int main()
{
  int n, i, j, current;
  int rows[100];

  cin >> n;

  int *cols = new int[n];

  for (i = 0; i < n; i++)
  {
    cols[i] = 0;
  }

  for (i = 0; i < 100; i++)
  {
    rows[i] = 0;
  }


  for (i = 0; i < n; i++)
  {
    cin >> current;

    for (j = 0; j < current; j++)
    {
      rows[j]++;
    }
  }

  for (i = 0; i < 100; i++)
  {
    int count = rows[i];

    for (j = 0; j < count; j++)
    {
      cols[j]++;
    }
  }

  for (i = (n - 1); i > 0; i--)
  {
    cout << cols[i] << " ";
  }

  cout << cols[0] << endl;
}