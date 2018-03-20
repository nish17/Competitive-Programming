/*
* CODECHEF: SOLVED
* PROBLEM STATEMENT: https://www.codechef.com/problems/TWTCLOSE
*/

#include <bits/stdc++.h>
using namespace std;

int callClick(int n, int ar[], int c)
{
  // int count = 0,
  // int ans;
  if (ar[n - 1] == 0)
  {
    ar[n - 1] = 1;
    // cout << "value of c: " << c << endl;
    c++;
    // cout << "value of c: " << c << endl;
  }
  else
  {
    ar[n - 1] = 0;
    c--;
  }
  return c;
}
int callCloseAll(int n, int ar[], int c)
{
  for (int i = 0; i < n; i++)
    ar[i] = 0;
  c = 0;
  return c;
}
int main()
{

  int n, x, k, c = 0;
  string key;
  cin >> n >> k;
  int _a[n];
  for (int i = 0; i < n; i++)
    _a[i] = 0;
  while (k--)
  {
    cin >> key;
    if (key == "CLICK")
    {
      cin >> x;
      c = callClick(x, _a, c);
      cout << c << endl;
    }
    else if (key == "CLOSEALL")
    {
      // cout << "Reached here\n";
      c = callCloseAll(n, _a, c);
      cout << c << endl;
    }
  }

  return 0;
}