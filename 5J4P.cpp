// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int _arr[],int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << _arr[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(){
  int t,n;
  cin >> t;
  int sum;
  while(t--){
    cin >> n;sum=0;
    int _array[n][n];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cin>>_array[i][j];
      }
    }
    cout <<"Output\n";
    print(_array,n);
  }
  

    

  return 0;
}


  //   cout << "value of n is " << n << "\n";
  //   for(int i=0; i<n; i++){ 
  //     int j=n-1;
  //     cout << "value of j is " << j << "\n";
  //     // sum = sum +_array[i][j];
  //     cout <<_array[i][j] << "\n";
  //   }
  //   // cout << sum << "\n";
  // }
