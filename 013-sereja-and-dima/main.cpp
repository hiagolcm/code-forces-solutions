#include <iostream>

using namespace std;

int main()
{
  int n, i, j, k, sereja = 0, dima = 0;
  bool isSereja = true;

  cin >> n;

  i = 0;
  j = n - 1;
  int *cards = new int[n];

  for (k = 0; k < n; k++)
  {
    cin >> cards[k];
  }

  int highestCard;

  while (i <= j)
  {
    highestCard = cards[i] > cards[j] ? cards[i] : cards[j];

    if (cards[i] > cards[j])
    {
      i++;
    }
    else
    {
      j--;
    }

    if (isSereja)
    {
      sereja += highestCard;
    }
    else
    {
      dima += highestCard;
    }

    isSereja = !isSereja;
  }

  cout << sereja << ' ' << dima << endl;

  return 0;
}