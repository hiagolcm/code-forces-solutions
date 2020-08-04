#include <iostream>

using namespace std;

struct RESULT
{
  int sereja;
  int dima;
};

void calculate(int start, int end, int *nums, RESULT *result, bool isSereja)
{
  if (end < start)
  {
    return;
  }

  bool isLeft = nums[start] > nums[end];
  int value = isLeft ? nums[start] : nums[end];

  if (isSereja)
  {
    result->sereja += value;
  }
  else
  {
    result->dima += value;
  }

  return calculate(isLeft ? start + 1 : start, isLeft ? end : end - 1, nums, result, !isSereja);
}

int main()
{
  int n, i, *nums;

  cin >> n;
  nums = new int[n];

  for (i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  RESULT result;
  result.dima = 0;
  result.sereja = 0;

  calculate(0, n - 1, nums, &result, true);

  cout << result.sereja << " " << result.dima << endl;

  return 0;
}