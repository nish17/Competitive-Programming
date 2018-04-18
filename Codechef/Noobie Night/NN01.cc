#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a(7), b(7);
  int c = 0;
  for (int i = 0; i < 7; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < 7; i++)
  {
    cin >> b[i];
    c = c + (a[i] - b[i]);
  }
  if (c > 0)
    cout << "cse\n";
  else if (c < 0)
    cout << "mech\n";
  else
    cout << "draw\n";
}