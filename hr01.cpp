#include <bits/stdc++.h>

using namespace std;

vector<int> howManyStudents(int m, vector<int> c)
{
  // Return an array denoting the number of students taking each class.
  vector<int> array1(m);
  // for (int i = 0; i <= c.size(); i++)
  // {int l=0;
  //   if (c[i] == l)
  //     array1[i]++;
  //     l++;
  // }

  int n = c.size();
  // cout << n << ": size;";
  int i = 0;
  while (n--)
  {

    int temp = c[i];
    // cout << i << " ";
    // cout << i << " value of temp = " << temp << " \n";
    array1[temp]++;
    // for (int j = 0; j < array1.size(); j++)
    // {
    //   cout << j << " start " << array1[j] << " end ";
    //   cout << endl;
    // }
    // cout << endl;
    i++;
  }
  return array1;
}

int main()
{
  int n;
  int m;
  cin >> n >> m;
  vector<int> c(n);
  for (int c_i = 0; c_i < n; c_i++)
  {
    cin >> c[c_i];
  }
  vector<int> result = howManyStudents(m, c);
  for (ssize_t i = 0; i < result.size(); i++)
  {
    cout << result[i] << (i != result.size() - 1 ? " " : "");
  }
  cout << endl;

  return 0;
}
