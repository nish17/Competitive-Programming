#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

  long long int t, n, temp, rem = 0;
  cin >> t;
  while (t--)
  {
    cin >> n;
    temp = n;
    rem = 0;
    while (temp != 0)
    {
      rem = rem * 10;
      rem = rem + temp % 10;
      temp = temp / 10;
    }
    cout << rem << endl;
  }
}