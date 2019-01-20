#include <iostream>
using namespace std;

int main()
{

  int t, n;

  cin >> t;
  while (t--)
  {
    cin >> n;
    if (n == 0)
    {
      cout << "1 " << n * 2 << "\n";
    }
    else
      cout << n / 2 << " " << n * 2 << "\n";
  }

  return 0;
}