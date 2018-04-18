#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n, x, a, b;

  cin >> n;
  vector<long long int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  cin >> x;
  vec.erase(vec.begin() + x - 1);
  // for (int i = 0; i < vec.size(); i++)
  //   cout << vec[i] << " ";
  // cout << endl;
  cin >> a >> b;
  vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
  cout << vec.size() << endl;
  for (int i = 0; i < vec.size(); i++)
    cout << vec[i] << " ";
  cout << endl;
  return 0;
}