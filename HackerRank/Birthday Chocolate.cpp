#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int GetSum(vector<int> x)
{
  int sum = 0;
  for (auto &n : x)
    sum += n;
  return sum;
}

void printVector(vector<int> t)
{
  for (int i = 0; i < t.size(); i++)
  {
    cout << t[i] << " ";
  }
  cout << endl;
}

int main()
{

  int t, c, d, m, counter = 0;
  cin >> t;
  vector<int> a;

  for (int i = 0; i < t; i++)
  {
    cin >> c;
    a.push_back(c);
  }
  cin >> d >> m;
  vector<int> b;
  for (int j = 0; j < a.size(); j++)
  {
    c = 0;
    for (int i = j; i < a.size(); i++)
    {
      if (c == m)
        break;
      b.push_back(a[i]);
      c++;
    }
    // printVector(b);
    if (GetSum(b) == d)
    {
      counter++;
      b.erase(b.begin(), b.end());
    }
  }
  cout << counter << endl;
  return 0;
}