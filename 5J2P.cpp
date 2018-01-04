#include <bits/stdc++.h>
using namespace std;

int main(){

  // int x,y,k;
  long int t,n;
  int _p[n],_c[n];
  cin >> t;
  while(t--){
    cin >> n;
    for(int i=0; i<n; i++) cin >> _p[i] >> _c[i];
    cout << "Printing the entered values\n";
    cout << "p[i]\tc[i]\n";
    for(int i=0; i<n; i++) cout << _p[i]<< "\t" << _c[i] << "\n";
  }

  return 0;
}