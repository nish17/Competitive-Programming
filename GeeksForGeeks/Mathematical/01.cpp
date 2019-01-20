#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //code
  int sum = 0, t, n, rem, temp, d;
  cin >> t;

  while (t--)
  {
    cin >> n;
    temp = n;
    while (temp > 0)
    {
      d = temp % 10;
      sum += pow(d, 3);
      temp = temp / 10;
    }
    if (sum == n)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}