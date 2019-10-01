#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t, n, m;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;

    // if (n % 2 == 0 && m % 2 == 0)
    //   cout << "YES\n";
    // else if (m == 2 || n == 2)
    //   cout << "YES\n";
    // else if (m == n && m * n % 2 == 0)
    //   cout << "YES\n";
    // else
    if (n % 2 == 0 || m % 2 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}