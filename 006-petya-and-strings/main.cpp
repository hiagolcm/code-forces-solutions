#include <iostream>

using namespace std;

int main()
{
  string first, second;

  getline(cin, first);
  getline(cin, second);

  int i, length = first.length();

  for (i = 0; i < length; i++)
  {
    if (tolower(first[i]) < tolower(second[i]))
    {
      cout << -1 << endl;
      return 0;
    }
    else if (tolower(first[i]) > tolower(second[i]))
    {
      cout << 1 << endl;
      return 0;
    }
  }

  cout << 0 << endl;

  return 0;
}