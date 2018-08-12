#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t, n, l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0;
  cin >> t;
  vector<int> arr(5), sans(5), ans;
  while (t--)
  {
    cin >> n;
    arr.push_back(n);
    switch (n)
    {
    case 1:
      sans[0] = ++l1;
      break;
    case 2:
      sans[1] = ++l2;
      break;

    case 3:
      sans[2] = ++l3;
      break;

    case 4:
      sans[3] = ++l4;
      break;

    case 5:
      sans[4] = ++l5;
      break;
    }
  }
  // sort(sans.begin(), sans.end());
  for (int i = 0; i < sans.size(); i++)
  {
    cout << sans[i] << " ";
  }
  cout << endl;
  // cout << distance(sans, max(sans.begin(), sans.end()));

  return 0;
}