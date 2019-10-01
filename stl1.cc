#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<char, int> count;
  string x = "nimesh solanki";
  for (char c : x)
  {
    count[c]++;
  }
  cout << count['a'] << endl;
  return 0;
}