#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> ar, vector<int> bh)
{
  int MAX = ar[0];
  for (int i = 1; i < ar.size(); i++)
  {
    if (MAX < ar[i])
      MAX = ar[i];
  }
  for (int i = 0; i < ar.size(); i++)
  {
    if (ar[i] == MAX)
  }
}

int main()
{

  long long int n, k;
  cin >> n >> k;
  vector<int> ar(n);
  vector<int> bh(n);
  for (int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> bh[i];
  }

  return 0;
}