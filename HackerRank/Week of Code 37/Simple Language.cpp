#include <bits/stdc++.h>
using namespace std;
long long int maximumProgramValue(long int n)
{
  string t;
  long long int y, x = 0, temp = 0;
  while (n--)
  {
    cin >> t >> y;
    if (t == "add")
    {
      x = x + y;
      if (x >= temp)
        temp = x;
    }
    else if (t == "set")
    {
      x = y;
      if (x >= temp)
        temp = x;
    }
  }
  return temp;
}

int main()
{
  long int n;
  cin >> n;
  long long int result = maximumProgramValue(n);
  cout << result << "\n";
  return 0;
}
