#include <bits/stdc++.h>
using namespace std;

int sortG(int x, int y)
{
  return x > y;
}

void printVector(vector<int> x)
{
  for (int n : x)
  {
    cout << n << endl;
  }
}

int main()
{

  vector<int> x, y;
  vector<long long int>::iterator it;
  for (int i = 0; i < 10; i++)
  {
    i = i - 1;
    y.push_back(i);
    i++;
    y.push_back(i);
  }
  x.push_back(5);
  x.push_back(8);
  x.push_back(6);
  x.push_back(9);
  x.push_back(79);
  x.push_back(100);
  x.push_back(71);
  x.push_back(07);
  // cout << "Before sorting\n";
  // printVector(x);
  // sort(x.begin(), x.end(), sortG);
  // cout << "After sorting\n";
  printVector(x);
  cout << "x.back(): " << x.back() << endl;
  x.push_back(99);
  cout << "x.back(): " << x.back() << endl;

  cout << "==================================\n";
  cout << "Printing Vector y:\n";
  printVector(y);
  cout << "y.back(): " << y.back() << endl;
  y.push_back(999);
  cout << "y.back(): " << y.back() << endl;

  return 0;
}