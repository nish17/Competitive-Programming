#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> a;
  vector<int>::iterator it, pos;
  for (int i = 0; i < 3; i++)
  {
    int x;
    cin >> x;
    a.push_back(x);
  }
  it = min_element(a.begin(), a.end());
  int value = *it;
  cout << "Minimum value in the vector is " << value << endl;
  int index = distance(a.begin(), it);
  if (index == 0)
  {
    // if (((*it + 1) < a[1]) && ((*it + 1) < a[2]))
    // int i = 0;
    cout << "Value of it before entering the loop " << *it << endl;
    while (!(a[1] - a[0] < 1 && a[2] - a[0] < 2))
    {
      // cout << "inside this\n";
      // cout << i++ << endl;

      value--;
      cout << "value of it after decrementing " << value << endl;
      a.at(0) = value;
      // break;
    }
    cout << "FInal Value of it " << value << endl;
    cout << value + value + 1 + value + 2 << endl;
  }
  else if (index == 1)
  {
    while (!(((*it - 1) <= a[0]) && ((*it + 1) <= a[2])))
    {
      *it--;
    }
    cout << *it - 1 + *it + *it + 1 << endl;
  }
  else if (index == 2)
  {
    while (!(((*it - 2) <= a[0]) && ((*it - 1) <= a[1])))
    {
      *it--;
    }
    cout << *it - 2 + *it + *it - 1 << endl;
  }
  return 0;
}