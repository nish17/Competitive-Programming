#include <bits/stdc++.h>
using namespace std;

void palind(int n)
{
  int num = n;
  int rem, d;
  do
  {
    d = num % 10;
    rem = (rem * 10) + d;
    num = num / 10;
  } while (num != 0);

  if (n == rem)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main()
{

  int t, n, temp, rem, sum, d;
  cin >> t;
  while (t--)
  {
    cin >> n;
    temp = n;
    sum = 0;
    while (temp > 0)
    {
      d = temp % 10;
      sum += d;
      temp = temp / 10;
    }
    palind(sum);
  }
}