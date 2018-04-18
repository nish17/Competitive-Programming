#include <bits/stdc++.h>
using namespace std;

string binarySearch(vector<long long int> arr, long long int l, long long int r, long long int x)
{
  long long int mid;
  string ans = "";
  if (r >= l)
  {
    mid = l + (r - l) / 2;
    if (arr[mid] == x)
    {
      ans = "Yes " + to_string(mid);
      return ans;
    }
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  // l = l + 1;
  ans = "No " + to_string(l + 1);
  return ans;
}

int main()
{
  long long int n, q, y;
  cin >> n;
  vector<long long int> a(n);
  for (long long int i = 0; i < n; i++)
    cin >> a[i];
  cin >> q;
  for (long int i = 0; i < q; i++)
  {
    cin >> y;
    cout << binarySearch(a, 0, a.size(), y) << endl;
  }
  return 0;
}
