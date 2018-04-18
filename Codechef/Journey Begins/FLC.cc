#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;

  for (int i = 0; i < a.length(); i++)
  {
    if ((int)a[i] >= 65 && (int)a[i] <= 90)
    {
      a[i] = char(32 + char(a[i]));
    }
    else if ((int)a[i] >= 97 && (int)a[i] <= 122)
    {
      a[i] = char(char(a[i]) - 32);
    }
  }
  cout << a << endl;
}