#include <bits/stdc++.h>
using namespace std;
char toupperC(char a);
int main()
{

  string name, s;
  cin >> name;
  getline(cin, name);
  int i = 0, l = 0;
  cout << toupperC(name[0]) << ".";
  while (i <= name.length())
  {
    cout << "Inside the loop\n";
    if (name[i] == 32)
    {
      cout << "->inside if condition\n";
      cout << toupperC(name[i]) << ".";
      l++;
      if (l == 2)
        break;
    }
    i++;
  }

  // cout << toupperC('e') << endl;
  return 0;
}

char toupperC(char a)
{
  char ans;
  if ((int)a >= 97)
  {
    int temp = int(a);
    ans = (char)(temp - 32);
  }
  else
  {
    ans = a;
  }
  return ans;
}