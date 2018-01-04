/*
* CODECHEF LECANDY https://www.codechef.com/problems/LECANDY
* SUBMITTED
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

  int t,n;
  long long int c;
  cin >> t;
  long int _array[n],s;
  while(t--){
    cin >> n >> c;s=0;
    for(long int i=0; i< n; i++){
      cin >> _array[i];
      s = s + _array[i];
    }
    // cout <<"Total No. of candies = " << c << endl;
    // cout <<"number of elephants = " << s << endl;

    if(c-s >=0) cout << "Yes\n";
    else cout << "No\n";
  }

  return 0;
}