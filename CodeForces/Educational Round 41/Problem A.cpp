#include <bits/stdc++.h>
using namespace std;

vector<int> occurence(vector<int> array, int n, int m)
{
  vector<int> ans(m);
  int i = 0;
  while (i < n)
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

  for (int i = 0; i < m; i++)
    ans[i] = abs(array[i]);
  return ans;
}

int main()
{
  int n, m, MAX;
  cin >> n >> m;
  vector<int> a(m);
  vector<int> b(n);
  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  b = occurence(a, m, n);
  MAX = b[0];
  for (int i = 1; i < n; i++)
  {
    if (MAX > b[i])
      MAX = b[i];
  }
  cout << MAX << endl;
  return 0;
}
