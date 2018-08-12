#include <bits/stdc++.h>
using namespace std;

int main()
{

  string t;
  cin >> t;
  vector<int> arr(t.length());
  for (int i = 0; i < t.length(); i++)
  {
    // cout << t[i] << endl;
    char key = t[i];
    int c = 0;
    for (int j = i; j < t.length(); j++)
    {
      if (t[j] == key)
        c++;
    }
    arr[i] = c;
  }

  for (int i = 1; i < arr.size(); i++)
  {
    if (t[i - 1] == t[i])
    {
      cout << t[i - 1] << " " << arr[i - 1] << endl;
    }
    else
    {
      cout << t[i - 1] << " " << arr[i - 1] << endl;
    }
  }
  return 0;
}