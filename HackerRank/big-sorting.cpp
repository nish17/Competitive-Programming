#include <bits/stdc++.h>

using namespace std;

vector<unsigned __int128> bigSorting(vector<string> arr, int n)
{
  vector<unsigned __int128> answ(n);
  unsigned __int128 x;
  for (int arr_i = 0; arr_i < n; arr_i++)
  {
    stringstream toInt(arr[arr_i]);
    x = 0;
    toInt >> x;
    answ[arr_i] = x;
  }
  sort(answ.begin(), answ.end());
  return answ;
}

int main()
{
  int n;
  cin >> n;
  vector<string> arr(n);
  for (int arr_i = 0; arr_i < n; arr_i++)
  {
    cin >> arr[arr_i];
  }
  vector<unsigned __int128> result = bigSorting(arr, n);
  for (ssize_t i = 0; i < result.size(); i++)
  {
    cout << result[i] << (i != result.size() - 1 ? "\n" : "");
  }
  cout << endl;

  return 0;
}
