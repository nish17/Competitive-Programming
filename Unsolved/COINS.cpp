#include <bits/stdc++.h>
using namespace std;

long long int by(long long int n, int d)
{
  if (n == 2)
    return n;
  else if (n > 2)
  {
    if (d == 3)
      return floor(n / d);
    else if (d == 2)
      return floor(n / d);
    else if (d == 4)
      return floor(n / d);
  }
}

int main()
{
  long long int t;
  cin >> t;
  if (t <= 2)
    cout << t << endl;
  else
    cout << by(t, 2) + by(t, 3) + by(t, 4) << endl;
  return 0;
}