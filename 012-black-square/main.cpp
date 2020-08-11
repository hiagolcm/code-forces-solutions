#include <iostream>

using namespace std;

int main()
{
  int i;
  int calories[4], total = 0,current;
  char strip;

  for (i = 0; i < 4; i++)
  {
    cin >> calories[i];
  }

  while (cin >> strip)
  {
    total += calories[((strip - '0') - 1)];
  }

  cout << total << endl;

  return 0;
}