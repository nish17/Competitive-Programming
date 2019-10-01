#include <bits/stdc++.h>
using namespace std;

void getsize(vector<int> t)
{
  cout << "Size of vector is: " << t.size() << endl;
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
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  a.push_back(5);
  a.push_back(7);
  a.push_back(8);
  a.push_back(9);
  a.push_back(10);
  getsize(a);
  a.erase(a.begin() + 5, a.end());
  getsize(a);
  printVector(a);
  return 0;
}