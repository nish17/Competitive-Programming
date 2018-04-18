#include <bits/stdc++.h>
using namespace std;
int c = 0;
bool checkStatus(string &str, long long int d);
void swapString(string &str, long long int d);
bool checkStatus(string &str, long long int d)
{
  bool ans;
  long long int a = 0, b = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'C')
    {
      a++;
      b = pow(2, a);
    }
    else if (str[i] == 'S')
    {
      d = d - b;
      if (d < 0)
      {
        swapString(str, d);
      }
      else
      {
        ans = true;
      }
    }
  }
  return ans;
}

void swapString(string &str, long long int d)
{
  do
  {
    for (int i = 0; i < str.length(); i++)
    {
      if (str[i] == 'C' && str[i] == 'S')
      {
        swap(str[i], str[i + 1]);
        c++;
      }
    }
  } while (!checkStatus(str, d));
}

int main()
{
  int t;
  long long int d, a = 0, b = 0;
  string p;
  cin >> t;
  while (t--)
  {
    cin >> d >> p;
    for (int i = 0; i < p.length(); i++)
    {
      if (p[i] == 'C')
      {
        a++;
        b = pow(2, a);
      }
      else if (p[i] == 'S')
      {
        d = d - b;
        if (d < 0)
        {
          swapString(p, d);
        }
      }
    }
    cout << c << endl;
  }
  return 0;
}