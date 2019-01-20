#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t, x, c = 0;
  vector<long long int> a, b;
  vector<long long int>::iterator it;
  cin >> t;
  for (long long int i = 0; i < t; i++)
  {
    cin >> x;
    a.push_back(x);
  }
  int check = a[0];
  for (long long int i = 1; i < a.size(); i++)
  {
    if (check >= a[i])
    {
      cout << "True for index " << i << " a[" << i << "]"
           << " = " << a[i];
      c++;
      cout << " value of c = " << c << endl;
    }
    else
    {
      b.push_back(c);
      c = 0;
      check = a[i];
    }
  }
  it = max_element(b.begin(), b.end());
  cout << "values of b vector:\n";
  for (long long int i : b)
  {
    cout << i << endl;
  }
  cout << *it << endl;
  return 0;
}