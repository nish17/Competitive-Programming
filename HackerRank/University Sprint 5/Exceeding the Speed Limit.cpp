#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  if (t <= 90)
  {
    cout << "0 No punishment\n";
  }
  else if (t > 90 && t <= 110)
  {
    cout << (t - 90) * 300 << " Warning\n";
  }
  else if (t > 110)
  {
    cout << (t - 90) * 500 << " License removed\n";
  }
  return 0;
}