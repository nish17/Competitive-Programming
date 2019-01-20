#include <bits/stdc++.h>
using namespace std;

int gcdRecursive(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main()
{

  int a, b;
  cin >> a >> b;
  cout << gcdRecursive(a, b) << endl;
  return 0;
}