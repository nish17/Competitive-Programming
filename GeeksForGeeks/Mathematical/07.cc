#include <bits/stdc++.h>
using namespace std;
long long int printDivisors(long long int n)
{
  long long int sum = 0;
  for (long long int i = 1; i <= n / 2; i++)
    if (n % i == 0)
      sum += i;

  cout << sum << " " << n << endl;
  if (sum == n)
  {
    return 1;
  }
  else
    return 0;
}

int printDivisors2(long long int n)
{
  long long int sum = 0;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      cout << "1. " << n << " is divisible by " << i << endl;
      if (n / i == i)
      {
        cout << "2. Adding i to the sum\nn/i = " << n / i << "\n i = " << i << endl;
        sum += i;
      }

      else
      {
        cout << "3. adding both to the sum "
             << n << " is divisible by " << i << endl;
        sum = sum + i + n / i;
      }
    }
  }
  cout << "final value of sum = " << sum << endl;
  if (sum == n)
  {
    return 1;
  }
  else
    return 0;
}

int main()
{
  int t;
  long long int n, sum = 0, temp;

  cin >> t;
  while (t--)
  {
    cin >> n;
    if (printDivisors2(n))
      cout << "1\n";
    else
      cout << "0\n";
  }

  return 0;
}