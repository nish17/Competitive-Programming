#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  long int num;
  while (t--)
  {
    int large = 0;
    cin >> num;
    for (int i = 2; num != 1; ++i)
    {
      while (num % i == 0)
      {
        num /= i;
        large = i;
      }
    }

    cout << large << "\n";
  }
  return 0;
}