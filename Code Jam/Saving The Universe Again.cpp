#include <bits/stdc++.h>
using namespace std;

void scrambleString(long long int d, string &str, long long int a, long long int b, int count);
void calculate(long long int d, string p, long long int a, long long int b, int count);

void scrambleString(long long int d, string &str, long long int a, long long int b, int count)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'c' && str[i + 1] == 's')
    {
      str[i] = 's';
      str[i + 1] = 'c';
    }
  }
  calculate(d, str, a, b, count);
}
void calculate(long long int d, string p, long long int a, long long int b, int count)
{

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
    }
  }
  if (d < 0)
  {
    count++;
    scrambleString(d, p, a, b, count);
  }
  else if (d > 0)
    cout << count << endl;
  else
    cout << "IMPOSSIBLE\n";
}
int main()
{
  int t, count = 0;
  long long int d, a = 0, b;
  string p;
  cin >> t;
  while (t--)
  {
    a = 0;
    b = 0;
    cin >> d >> p;
    calculate(d, p, a, b, count);
  }
  return 0;
}