#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int t;
  int n, m, N;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    N = pow(m, 1 / (float)n);
    cout << n << "th root of " << m << " is " << N << endl;
    if (pow(N, n) == m)
      cout << N << endl;
    else
      cout << "-1\n";
  }
  return 0;
}