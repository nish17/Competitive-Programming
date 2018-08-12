#include <bits/stdc++.h>

using namespace std;
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, k, bc, sum = 0;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i != k)
    {
      sum = sum + arr[i];
    }
  }
  sum /= 2;
  cin >> bc;

  if (bc - sum == 0)
  {
    cout << "Bon Appetit\n";
  }
  else
  {
    cout << bc - sum << endl;
  }

  return 0;
}