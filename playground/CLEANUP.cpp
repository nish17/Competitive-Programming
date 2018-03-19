#include <bits/stdc++.h>
using namespace std;
void printIntersection(vector<int> arr1, vector<int> arr2, int m, int n);
int binarySearch(vector<int> arr, int l, int r, int x);
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(vector<int> arr, int l, int r, int x)
{
  if (r >= l)
  {
    int mid = l + (r - l) / 2;

    // If the element is present at the middle itself
    if (arr[mid] == x)
      return mid;

    // If element is smaller than mid, then it can only
    // be presen in left subarray
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);

    // Else the element can only be present in right subarray
    return binarySearch(arr, mid + 1, r, x);
  }

  // We reach here when element is not present in array
  return -1;
}
void printIntersection(vector<int> arr1, vector<int> arr2, int m, int n)
{
  // Before finding intersection, make sure arr1[0..m-1]
  // is smaller
  if (m > n)
  {
    int *tempp = arr1;
    arr1 = arr2;
    arr2 = tempp;

    int temp = m;
    m = n;
    n = temp;
  }

  // Now arr1[] is smaller

  // Sort smaller array arr1[0..m-1]
  sort(arr1, arr1 + m);

  // Search every element of bigger array in smaller
  // array and print the element if found
  for (int i = 0; i < n; i++)
    if (binarySearch(arr1, 0, m - 1, arr2[i]) != -1)
      cout << arr2[i] << " ";
}

int main()
{
  int t, m, n;
  cin >> t;
  while (t--)
  {
    cin >> n >> m;
    vector<int> _array1(m);
    for (int i = 0; i < m; i++)
    {
      cin >> _array1[i];
    }
    sort(_array1.begin(), _array1.end());
    vector<int> _array2(m);
    for (int i = 1; i <= n; i++)
      _array2[i] = i;

    printIntersection(_array1, _array2, m, n);
  }
  return 0;
}