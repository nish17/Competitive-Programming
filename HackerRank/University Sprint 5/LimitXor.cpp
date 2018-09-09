#include <bits/stdc++.h>
using namespace std;

int main()
{

  long int n, k, count = 0, ans;
  cin >> n >> k;
  vector<long int> a(n);

  for (long int i = 0; i < a.size(); i++)
    cin >> a[i];

  for (long int i = 0; i < a.size(); i++)
  {
    for (long int j = i; j < a.size(); j++)
    {
      if (i == j)
      {
        if (a[i] < k)
          count++;
      }
      else
      {
        if (j - i >= 1)
        {
          ans = a[i] ^ a[j];
          if (ans < k)
            count++;
        }
        else
        {
          ans = ans ^ a[j];
          if (ans < k)
            count++;
        }
      }
    }
  }
  // cout << count << endl;
  return count;

  return 0;
}