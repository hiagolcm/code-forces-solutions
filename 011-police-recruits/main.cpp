#include <iostream>

using namespace std;

int main()
{
  int freePoliceOfficers = 0, untreatedCrimes = 0, n, i, state;

  cin >> n;

  for (i = 0; i < n; i++)
  {
    cin >> state;

    if (state == -1)
    {
      if (freePoliceOfficers > 0)
      {
        freePoliceOfficers--;
      }
      else
      {
        untreatedCrimes++;
      }
    }
    else
    {
      freePoliceOfficers += state;
    }
  }

  cout << untreatedCrimes << endl;

  return 0;
}