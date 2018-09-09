#include <bits/stdc++.h>
using namespace std;

string calculateResult(long long int n)
{
  int rem = n % 10;
  // cout << rem << endl;
  int last = rem;
  int first, sum = 0;
  sum = sum + last;
  // cout << "Loop sum=" << sum << endl;
  while (n >= 10)
  {
    n = n / 10;
    rem = n % 10;
    // cout << "rem " << rem << endl;
    sum = sum + rem;
    // cout << "Loop sum=" << sum << endl;
  }
  first = n;
  // cout << "first: " << first << " last: " << last << endl;
  // cout << "sum " << sum << endl;
  // cout << "first+last = " << first + last << endl;
  if (first + last == (sum - first - last))
    cout << "YES\n";
  else
    cout << "NO\n";
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin >> n;
    cout << calculateResult(n);
  }
}