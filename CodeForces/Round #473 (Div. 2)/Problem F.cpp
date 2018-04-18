#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n, q, l, x;
  cin >> n >> q;
  vector<long long int> a(n);

  for (long long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (long long int i = 0; i < q; i++)
  {
    cin >> l >> x;
    for (int j = 0; j < l - 1; j++)
    {
      for (int k = 0; k < l; k++)
      {
        if (a[j] ^ a[k])
      }
    }
  }
  return 0;
}