/*
  HACKERRANK: SOLVED
  problem statement link: https://www.hackerrank.com/challenges/apple-and-orange/problem
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// long long int countApplesAndOranges()
// {
// }
int main()
{
  long long int s, t, a, b, m, n, ca = 0, co = 0;
  cin >> s >> t >> a >> b >> m >> n;
  long long int _a[m], _o[n];
  for (int i = 0; i < m; i++)
  {
    cin >> _a[i];
    _a[i] += a;
    // cout << _a[i] << " ";
    if (_a[i] >= s && _a[i] <= t)
      ca++;
  }
  cout << ca << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> _o[i];
    _o[i] += b;
    // cout << _o[i] << " ";
    if (_o[i] >= s && _o[i] <= t)
      co++;
  }
  cout << co << endl;

  return 0;
}
