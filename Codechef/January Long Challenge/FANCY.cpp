#include <bits/stdc++.h>
using namespace std;

int isSubString(string s)
{
  int ans;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'n')
    {
      if (s[i - 1] == ' ' && s[i + 1] == 'o' && s[i + 2] == 't' && s[i + 3] == ' ')
      {
        ans = 1;
      }
    }
    else
      ans = 0;
  }
  return ans;
}

int main()
{
  int t;
  string s;
  cin >> t;

  while (t--)
  {
    cin.sync();
    std::getline(std::cin, s);
    isSubString(s) ? cout << "Real fancy\n" : cout << "regularly fancy\n";
  }
  return 0;
}