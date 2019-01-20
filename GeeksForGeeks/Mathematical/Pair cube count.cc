#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{

  int t;
  long long int n, c, N;
  // cout << (int)pow(28, 1.0 / 3.0);
  cin >> t;
  while (t--)
  {
    cin >> n;
    c = 0;
    N = (int)pow(n, 1.0 / 3.0);
    // cout << "Value of N: " << N << endl
    for (long long int i = 0; i <= N; i++)
    {
      for (long long int j = i + 1; i <= N; i++)
      {
        if (pow(i, 3) + pow(j, 3) == n)
          c++;
      }
      cout << 2 * c << endl;
    }
  }
  return 0;
}