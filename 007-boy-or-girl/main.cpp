#include <iostream>

using namespace std;

int main()
{
  string name;

  getline(cin, name);

  char *charsSet = new char[name.length()];

  int i, j, last = 0;
  bool hasEqual = false;
  int result = 0;

  for (i = 0; i < name.length(); i++)
  {
    for (j = 0; j < last; j++)
    {
      if (name[i] == charsSet[j])
      {
        hasEqual = true;
        break;
      }
    }

    if (!hasEqual)
    {
      charsSet[last] = name[i];
      result++;
      last++;
    }

    hasEqual = false;
  }

  if (result % 2 != 0) {
    cout << "IGNORE HIM!" << endl;
  } else {
    cout << "CHAT WITH HER!" << endl;
  }

  return 0;
}