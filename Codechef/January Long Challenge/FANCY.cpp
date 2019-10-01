#include <bits/stdc++.h>
using namespace std;

int isSubString(string s)
{
  int ans;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ')
    {
      if (s[i + 1] == 'n' && s[i + 2] == 'o' && s[i + 3] == 't' && s[i + 4] == ' ')
      {
        cout << "condition 1 satisfied\n";
        /* When "not" is in the middle of the sentence */
        ans = 1;
        break;
      }
    }

    else if (s[i] == 'n')
    {
      if (s[i - 1] == ' ' && s[i + 1] == 'o' && s[i + 2] == 't' && (i + 3 <= s.length()) && !isalpha(s[i + 3]))
      {
        cout << "condition 3 satisfied\n";
        /* When "not" is at the end of the sentence */
        ans = 1;
        break;
      }
      if (i == 0 && s[i + 1] == 'o' && s[i + 2] == 't' && s[i + 3] == ' ')
      {
        cout << "condition 4 satisfied\n";
        /* When "not" is in the beginning of the sentence */
        ans = 1;
        break;
      }
      if (!isalpha(s[i - 1]) && s[i + 1] == 'o' && s[i + 2] == 't' && s[i + 3] == ' ')
      {
        cout << "condition 2 satisfied\n";
        /* When "not" is in the beginning of the sentence */
        ans = 1;
        break;
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
    cin.ignore();
    getline(cin, s);
    isSubString(s) == 1 ? cout << "Real Fancy\n" : cout << "regularly fancy\n";
  }
  return 0;
}