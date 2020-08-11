#include <iostream>

using namespace std;

int main()
{
  int n, i, count = 0;
  string stones;
  bool allDifferent = true;

  cin >> n;
  getline(cin, stones);
  getline(cin, stones);

  for (i = 0; i < n - 1; i++)
  {
    if (stones[i] == stones[i+1]) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}