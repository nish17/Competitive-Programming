#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  long long int n;
  cin >> n;
  vector<long long int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
  return 0;
}
