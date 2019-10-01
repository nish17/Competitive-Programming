#include <bits/stdc++.h>
using namespace std;
int check(int r, int r1, int c, int c1)
{
  return pow((r - r1), 2) + pow((c - c1), 2) <= 2 ? 1 : 0;
}
int main()
{

  int t, r, c, k, count;
  cin >> t;
  while (t--)
  {
    cin >> r >> c >> k;
    count = 0;
    if (r + k <= 8 && c + k <= 8)
      check(r, r + k, c, c + k) ? count++ : count;

    if (r - k >= 1 && c - k >= 1)
      check(r, r - k, c, c - k) ? count++ : count;
    if (r + k <= 8)
      check(r, r + k, c, c) ? count++ : count;
    if (r - k >= 1)
      check(r, r - k, c, c) ? count++ : count;
    if (r - k >= 1 && c - k >= 1)
      check(r, r - k, c, c - k) ? count++ : count;
    if (r - k >= 1 && c + k <= 8)
      check(r, r - k, c, c + k) ? count++ : count;
    if (c - k >= 1)
      check(r, r, c, c + k) ? count++ : count;
    if (c + k <= 8)
      check(r, r, c, c + k) ? count++ : count;
    if (r + k <= 8 && c - k >= 1)
      check(r, r + k, c, c - k) ? count++ : count;
  }
  cout << count << endl;
  return 0;
}