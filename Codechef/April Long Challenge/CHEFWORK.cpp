#include <bits/stdc++.h>
using namespace std;
int k = 1;
void autt(vector<long int> a)
{
  sort(a.begin(), a.end());
  cout << a[0] << endl;
  k = 0;
}

int main()
{
  long int n, l = 0; // m = 0, ans = 0, o = 0;
  cin >> n;
  vector<long int> a(n), b(n), c, d, e;
  for (long int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (long int i = 0; i < n; i++)
  {
    cin >> b[i];
    if (b[i] == 3)
      l++;
    if (l == n)
    {
      autt(a);
      break;
      exit(1);
    }
    else if (b[i] == 1)
    {
      c.push_back(a[i]);
    }
    else if (b[i] == 2)
    {
      d.push_back(a[i]);
    }
    else if (b[i] == 3)
    {
      e.push_back(a[i]);
    }

    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    sort(e.begin(), e.end());
    if (k != 0)
    {
      if (c[0] + d[0] < e[0])
        cout << c[0] + d[0] << endl;
      else
        cout << e[0] << endl;
    }
  }
  return 0;
}