#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t = 0, count = 0;

  for (int i = 300; i <= 800; i++)
  {
    if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
