#include <bits/stdc++.h>
using namespace std;
// #define max 4000000
int main()
{
  long long int a = 0, b = 1, ans = 0, sum = 0;
  while (1)
  {
    if (ans <= 4000000)
    {
      ans = a + b;
      a = b;
      b = ans;
      if (ans % 2 == 0)
        sum += ans;
      cout << ans << " ";
    }
    else
      break;
  }
  cout << endl;
  cout << "Sum: " << sum << endl;
  return 0;
}