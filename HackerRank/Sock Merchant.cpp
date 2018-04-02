#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
  // Complete this function
  vector<int> pair;
  int ans = 0;
  for (int i = 0; i < ar.size(); i++)
  {
    for (int j = 1; j < ar.size(); j++)
    {
      if (ar[i] == ar[j] && ar[i] != -99 && ar[j] != -99)
      {
        pair.push_back(ar[i]);
        ar[i] = -99;
        ar[j] = -99;
      }
    }
    ans = ans + pair.size() / 2;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  vector<int> ar(n);
  for (int ar_i = 0; ar_i < n; ar_i++)
  {
    cin >> ar[ar_i];
  }
  int result = sockMerchant(n, ar);
  cout << result << endl;
  return 0;
}
