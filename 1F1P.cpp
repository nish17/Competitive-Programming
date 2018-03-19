#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, cc, ch, ce, cf;
  string str;
  cin >> t;
  while (t--)
  {
    cin >> str;
    cc = 0, ch = 0, ce = 0, cf = 0;
    for (int i = 0; i < str.length(); i++)
    {
      //cout << str[i] << " ";
      // if (str[i] == 'c')
      //   cc++;
      // else if (str[i] == 'h')
      //   ch++;
      // else if (str[i] == 'e')
      //   ce++;
      // else if (str[i] == 'f')
      //   cf++;
      cout << str.substr();
    }
    // cout << cc << " " << ch << " " << ce << " " << cf << endl;
  }
}