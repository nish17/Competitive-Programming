#include <bits/stdc++.h>
using namespace std;

long long int Mturn(long long int n)
{
  // bool ans;
  long long int a;
  for (int i = n; i >= 1; i--)
  {
    if (i % 2 == 0)
    {
      a = i;
      break;
    }
    else
    {
      a = 0;
      break;
    }
  }
  return a;
}

long long int Eturn(long long int n)
{
  // bool ans;
  long long int a;
  for (int i = n; i >= 1; i--)
  {
    if (i % 2 != 0)
    {
      a = i;
      break;
    }
    else
    {
      a = 0;
      break;
    }
  }
  return a;
}
int main()
{
  long long int n;
  // long long int p = &n;
  cin >> n;
  long long int i = 0;
  while (n >= 0)
  {
    if (i % 2 == 0 && n > 0)
    {
      n = n - Mturn(n);
      // cout << "value of a after M's turn = " << a << endl;
      i++;
    }
    else if (i % 2 != 0 && n > 0)
    {
      n = n - Eturn(n);
      // cout << "value of a after E's turn = " << a << endl;
      i++;
    }
    if (i % 2 == 0 && n <= 0)
    {
      cout << "Ehab\n";
      break;
    }
    else if (i % 2 != 0 && n <= 0)
    {
      cout << "Mahmoud\n";
      break;
    }
  }

  return 0;
}