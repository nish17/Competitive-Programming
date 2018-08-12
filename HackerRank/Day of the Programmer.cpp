#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.

bool checkYear(int year)
{
  if (year % 400 == 0)
    return true;
  if (year % 100 == 0)
    return false;
  if (year % 4 == 0)
    return true;
  return false;
}

// string
void solve(int year)
{
  // ostringstream s;
  if (checkYear(year) || year == 1800)
  {
    // s << "12.09." << year << "\n";
    // return s.str();
    cout << year << " ";
  }
  // else
  // {
  // s << "13.09." << year << "\n";
  // return s.str();
  // }
}

int main()
{
  // int year;
  // cin >> year;
  for (int i = 1900; i <= 1920; i++)
    solve(i);
}