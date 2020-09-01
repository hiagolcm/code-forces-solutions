#include <iostream>

using namespace std;

int main()
{
  int n, i, j, count = 0, currentColor;
  int **teams;
  int hash[100];

  for (i = 0; i < 100; i++) {
    hash[i] = -1;
  }

  cin >> n;
  teams = new int *[n];

  for (i = 0; i < n; i++)
  {
    teams[i] = new int[2];
    cin >> teams[i][0];
    cin >> teams[i][1];
  }

  for (i = 0; i < n; i++)
  {
    if (hash[teams[i][1] - 1] > -1)
    {
      count += hash[teams[i][1] - 1] + 1;
      continue;
    }

    for (j = 0; j < n; j++)
    {
      if (teams[i][1] == teams[j][0])
      {
        count++;
        hash[teams[i][1] - 1] += 1;
      }
    }
  }

  cout << count << endl;

  return 0;
}