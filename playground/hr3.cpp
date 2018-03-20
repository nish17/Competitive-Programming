#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int x1, x2, v1, v2, d1, d2;
  cin >> x1 >> x2 >> v1 >> v2;
  if (((x2 - x1) % (v2 - v1)) == 0)
    cout << "YES\n";
  else if (x2 > x1 && v2 > v1)
    cout << "NO\n";
  else
    cout << "NO\n";
  return 0;
}
