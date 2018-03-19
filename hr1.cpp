/*
  HACKERRANK: SOLVED
  problem statement link: https://www.hackerrank.com/challenges/grading/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int calGrade(int x)
{
  int next, ans;
  next = x + (5 - (x % 5));
  // cout << "Next value for " << x << " is " << next << "\n";
  if (next - x < 3 && x >= 38)
    ans = next;
  else if (next - x >= 3 && x >= 38)
    ans = x;
  else if (x < 38)
    ans = x;

  return ans;
}
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t, x;
  cin >> t;
  while (t--)
  {
    cin >> x;
    cout << calGrade(x) << endl;
  }
  return 0;
}
