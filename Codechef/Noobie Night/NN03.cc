#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  long long int a, b, ans;

  while (t--)
  {
    cin >> a >> b;
    ans = (a > b) ? a : b;

    do
    {
      if (ans % a == 0 && ans % b == 0)
      {
        cout << ans << "\n";
        break;
      }
      else
        ++ans;
    } while (true);
  }
  return 0;
}