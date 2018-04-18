#include <bits/stdc++.h>
#include <numeric>
using namespace std;
vector<long long int> occurence(vector<long long int> array, int m)
{
  vector<long long int> ans(m);
  int i = 0;
  while (i < m)
  {
    if (array[i] <= 0)
    {
      i++;
      continue;
    }
    int ind = array[i] - 1;
    if (array[ind] > 0)
    {
      array[i] = array[ind];
      array[ind] = -1;
    }
    else
    {
      array[ind]--;
      array[i] = 0;
      i++;
    }
  }
  for (int i = 0; i < ans.size(); i++)
    ans[i] = abs(array[i]);
  return ans;
}
long long int specialSum(int i, vector<long long int> a, int k)
{
  long long int find = a[i];
  long long int c = 0;
  vector<long long int> ans;

  for (int j = 1; j < a.size(); j++)
  {
    // for (int k = j + 1; k < a.size(); k++)
    // {
    if (i != j && find == a[k])
    {
      c++;
      if (c == k)
      {
        ans.push_back(a[j]);
      }
      // }
    }
  }

  long long int sum_of_elems = std::accumulate(ans.begin(), ans.end(), 0);
  return sum_of_elems;
}
int main()
{
  int t, n, k;
  cin >> t;
  vector<long long int> ans;
  long long int nn;
  while (t--)
  {
    cin >> n >> k;
    vector<long long int> _array(n);
    for (int i = 0; i < n; i++)
    {
      cin >> _array[i];
    }
    // ans = occurence(_array, n);
    for (int i = 0; i < n; i++)
      nn = specialSum(i, _array, k);
  }
  // for (int i = 0; i < ans.size(); i++)
  // {
  //   cout << ans[i];
  // }
  cout << nn << endl;
  return 0;
}