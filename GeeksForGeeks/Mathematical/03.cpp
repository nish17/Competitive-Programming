#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{

  long long int t, n, temp, rem, sum, d, i;
  cin >> t;
  while (t--)
  {
    cin >> n;
    temp = n;
    sum = 0;
    i = 0;
    while (temp > 0)
    {
      d = temp % 10;
      if (d == 1)
        sum += pow(2, i);
      temp = temp / 10;
      i++;
    }
    cout << sum << endl;
  }
}