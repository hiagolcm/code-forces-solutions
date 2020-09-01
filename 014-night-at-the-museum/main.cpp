#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int i, moves = 0, selectedChar = 97, currentCharInt, distance;
  string name;
  getline(cin, name);
  int n = name.length();

  for (i = 0; i < n; i++)
  {
    currentCharInt = (int)name[i];
    distance = abs(currentCharInt - selectedChar);

    if (distance < 13)
    {
      moves += distance;
    }
    else
    {
      moves += 26 - distance;
    }

    selectedChar = currentCharInt;
  }

  cout << moves << endl;

  return 0;
}