#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int t;
  int n, m, N;
  cin >> t;
  bool ans = false;
  while (t--)
  {
    cin >> n;
    for (int i = 2; i < n; i++)
    {
      for (int i = 2; i < n; i++)
        if (n % i == 0)
          ans = true;
    }
    if (ans)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}