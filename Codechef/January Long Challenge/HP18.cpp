#include <bits/stdc++.h>
using namespace std;

void printVector(vector<long long int> t)
{
  for (int i = 0; i < t.size(); i++)
  {
    cout << t[i] << " ";
  }
  cout << endl;
}

int main()
{
  int t, a, b;
  cin >> t;
  long long int n, y, multiples_of_a = 0, multiples_of_b = 0;
  vector<long long int> x;
  while (t--)
  {
    cin >> n >> a >> b;
    multiples_of_a = 0;
    multiples_of_b = 0;
    for (long long int i = 0; i < n; i++)
    {
      cin >> y;
      x.push_back(y);
      if (y % a == 0)
      {
        multiples_of_a++;
      }
      if (y % b == 0)
      {
        multiples_of_b++;
      }
    }

    if (a == b)
    {
      if ((multiples_of_a / 2) % 2 == 0)
        cout << "ALICE\n";

      else
        cout << "BOB\n";
    }
    else
    {
      if (multiples_of_a < multiples_of_b)
        cout << "ALICE\n";

      else
        cout << "BOB\n";
    }
  }
  return 0;
}