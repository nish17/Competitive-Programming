#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  long long int sum = 0, c = 0, temp = 0;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  // for (int i = 0; i < a.size(); i++)
  // {
  for (int j = 0; j < a.size(); j++)
  {
    sum = sum + a[j];
    c++;
    if (sum == k)
    {
      if(temp > c)
      cout << c << endl;
    }
  }
  temp = c;
  // }
  return 0;
}