#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int row, column, i, j, cell;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      cin >> cell;
      if (cell == 1)
      {
        row = i;
        column = j;
      }
    }
  }

  cout << abs(row - 2) + abs(column - 2) << endl;
}