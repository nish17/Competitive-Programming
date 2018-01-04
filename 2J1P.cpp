#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long int find(long long int arr[],long long int n,long long int size){
  long long int z;
  for(long long int i=0; i<size; i++) if(n == arr[i]) z= i+1;
  return z;
}

int main(){

  long long int t,n;
  cin >> t;
  long long int _array[n],x;
  while(t--){
    cin >> n;
    for(long long int i=0; i<n; i++){
      cin >> _array[i];
    }
    cin >> x; x= _array[x-1];
    //  cout << "value of x = "<< x<< endl;
    sort(_array, _array+n); 
    // show(_array,n);
    cout << find(_array,x,n)<< endl;
  }
  return 0;
}