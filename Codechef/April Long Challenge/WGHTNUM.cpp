#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int t;
  cin >> t;
  while (t--)
  {
    long long int n, w;
    cin >> n >> w;
    long long int po = pow(10, n);
    long long int i, rem, ans, temp, count = 0;
    for (i = 10; i < po; i++)
    {
      // cin >> t;
      // cout << "Current value of t " << t << endl;
      if ((i % po) != 0)
      {
        temp = i;
        ans = 0;
        while (temp != 0)
        {
          rem = temp % 10;
          ans = abs(ans - rem);
          temp = temp / 10;
        }
        if (ans == w)
        {
          // cout << ans << endl;
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}