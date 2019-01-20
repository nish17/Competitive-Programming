#include <bits/stdc++.h>
using namespace std;
int bin_search(int A[], int left, int right, int k)
{
  int mid = (left + right) / 2;
  if (A[mid] == k)
    return mid;
  else if (k > A[mid] && left < right)
  {
    left = mid + 1;
    bin_search(A, left, right, k);
  }
  else if (k < A[mid] && left < right)
  {
    right = mid - 1;
    bin_search(A, left, right, k);
  }
  else
    return -1;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n], key;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cin >> key;
    int found = bin_search(a, 0, n - 1, key);
    cout << found << endl;
  }
  return 0;
}