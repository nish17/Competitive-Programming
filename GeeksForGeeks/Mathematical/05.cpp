#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

  long long int t, a, b, k, temp, rem = 0, i;
  cin >> t;
  while (t--)
  {
    cin >> a >> b >> k;
    a = pow(a, b);
    // cout << a << endl;
    temp = a;
    i = 0;
    while (temp != 0)
    {
      rem = temp % 10;
      i++;
      if (i == k)
      {
        cout << rem << endl;
        break;
      }
      temp = temp / 10;
    }
    // cout << rem << endl;
  }
}