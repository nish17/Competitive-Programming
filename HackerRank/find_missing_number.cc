#include <bits/stdc++.h>
using namespace std;
// using XOR method
/*
int getMissing(int arr[], int n)
{
  int i, x2 = 1, x1 = arr[0];
  for (i = 1; i < n; i++)
  {
    x1 = x1 ^ arr[i];
    cout << "value of x1 " << x1 << "\n value of array " << arr[i];
  }
  for (i = 2; i <= n + 1; i++)
  {
    x2 = x2 ^ i;
    cout << "value of x1 " << x2 << "\n value of i " << arr[i];
  }
  return (x1 ^ x2);
}
*/
//using simple maths

int getMissing(int arr[], int n)
{
  int t = 0;
  t = ((n + 1) * (n + 2)) / 2;
  for (int i = 0; i < n; i++)
  {
    t -= arr[i];
  }
  return t;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  cout << getMissing(arr, 5) << endl;
  return 0;
}
