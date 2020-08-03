#include <iostream>

using namespace std;

int main()
{
  int n;
  double height;

  cin >> n;
  cin >> height;

  double *heights = new double[n];

  int i;
  for (i = 0; i < n; i++)
  {
    cin >> heights[i];
  }

  double width = 0;

  for (i = 0; i < n; i++)
  {
    if (heights[i] <= height)
    {
      width += 1;
    }
    else
    {
      width += 2;
    }
  }

  cout << width << endl;
}