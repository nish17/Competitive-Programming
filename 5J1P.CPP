/*
* CODECHEF CNOTE https://www.codechef.com/problems/CNOTE
* 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

  long int t,n,u,l;
  int x,y,k;
  cin >> t;
  int _p[n],_c[n];
  while(t--){
    cin >> x >> y >> k >> n;
    for(int i=0; i<n; i++) cin >> _p[i] >> _c[i];

    cout << "Printing the value of p and c\n";
    for(int i=0; i<n; i++) cout << _p[i] << " "<< _c[i] << "\n";
    
    u=0;l=0;
    for(int j=0; j<n; j++){
      if(_c[j]<=k && _p[j]-(x-y) >= 0) {
        cout << _p[j] << "\n";
        u = x - y;
        cout << u << "\n";
        // cout<< x-y << endl;
        cout << "LuckyChef\n";
        l =1;
      }
      else if(_c[j]<=k && _p[j]-(x-y) < 0)u++;
      else if(_c[j] > k) u++;
    }
    if(u > 0 && l==0) cout << "UnluckyChef\n"; 
  }
  return 0;
}


// if(l >= 0) {
//           cout << "LuckyChef\n";
//         }
//         else{
//           cout << "UnluckyChef\n";
//         }