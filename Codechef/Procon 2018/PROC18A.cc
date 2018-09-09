#include <bits/stdc++.h>
using namespace std;
// struct greater
// {
//   template <class T>
//   bool operator()(T const &a, T const &b) const { return a > b; }
// };
int main()
{

  int t;
  cin >> t;
  int n, k, temp, sum;
  while (t--)
  {
    cin >> n >> k;
    sum = 0;
    temp = 0;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      sum += a[i];
      temp++;
      if (temp == k)
      {
        // cout << "Sum: " << sum << endl;
        b.push_back(sum);
        i = i - (k - 1);
        temp = 0;
        sum = 0;
        // break;
      }
    }
    sort(b.begin(), b.end(), std::greater<int>());
    cout << b[0] << endl;
  }

  return 0;
}