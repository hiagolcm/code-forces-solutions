#include <iostream>

using namespace std;

int main()
{
  int n, i, anton = 0, danik = 0;
  char winner;

  cin >> n;

  for (i = 0; i < n; i++)
  {
    cin >> winner;

    if (winner == 'A')
    {
      anton++;
    }
    else
    {
      danik++;
    }
  }

  if (anton > danik)
  {
    cout << "Anton" << endl;
  }
  else if (danik > anton)
  {
    cout << "Danik" << endl;
  }
  else
  {
    cout << "Friendship" << endl;
  }
}