#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int h, u, d;
    cin >> h >> u >> d;
    int travelled = 0, count = 0;
    while (travelled < h)
    {
      travelled = travelled + u;
      count++;
      if (travelled > h)
        break;
      else
        travelled = travelled - d;
    }
    cout << count << endl;
  }
  return 0;
}