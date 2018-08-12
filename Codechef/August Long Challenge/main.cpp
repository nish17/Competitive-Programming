#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  string a, b;
  cin >> t;
  while (t--)
  {
    int b1 = 0, o = 0;
    char v[3] = {'$', '$', '$'};
    cin >> a >> b;
    if (a == "bob" || b == "bob")
    {
      cout << "yes\n";
    }
    else
    {
      for (int i = 0; i < 3; i++)
      {
        if (a[i] == 'b')
        {
          // cout << "Value found at a[" << i << "] " << a[i] << endl;
          v[i] = 'b';
          // cout << "value added at v[" << i << "] " << v[i] << endl;
          b[i] = '$';
          // cout << "Value changed at b[" << i << "] " << b[i] << endl;
        }
        else if (a[i] == 'o')
        {
          // cout << "Value found at a[" << i << "] " << a[i] << endl;
          v[i] = 'o';
          // cout << "value added at v[" << i << "] " << v[i] << endl;
          b[i] = '$';
          // cout << "Value changed at b[" << i << "] " << b[i] << endl;
        }
        else if (b[i] != '$' && b[i] == 'b')
        {
          // cout << "Value found at b[" << i << "] " << b[i] << endl;
          v[i] = 'b';
          // cout << "value added at v[" << i << "] " << v[i] << endl;
        }
        else if (b[i] != '$' && b[i] == 'o')
        {
          // cout << "Value found at b[" << i << "] " << b[i] << endl;
          v[i] = 'o';
          // cout << "value added at v[" << i << "] " << v[i] << endl;
        }
      }
      for (int i = 0; i < 3; i++)
      {
        if (v[i] == 'b')
        {
          // cout << "\n\n\tValue at v[" << i << "] " << v[i] << endl;
          b1++;
        }
        else if (v[i] == 'o')
        {
          // cout << "\n\n\tValue at v[" << i << "] " << v[i] << endl;
          o++;
        }
      }
      if (b1 == 2 && o == 1)
        cout << "yes\n";
      else
        cout << "no\n";
    }
  }
  return 0;
}
