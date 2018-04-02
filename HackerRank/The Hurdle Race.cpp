#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height)
{
  // Complete this function
  int MAX = height[0], ans;
  for (int i = 1; i < height.size(); i++)
  {
    if (MAX < height[i])
      MAX = height[i];
  }
  if ((MAX - k) < 0)
    ans = 0;
  else
    ans = MAX - k;

  return ans;
}

int main()
{
  int n;
  int k;
  cin >> n >> k;
  vector<int> height(n);
  for (int height_i = 0; height_i < n; height_i++)
  {
    cin >> height[height_i];
  }
  int result = hurdleRace(k, height);
  cout << result << endl;
  return 0;
}