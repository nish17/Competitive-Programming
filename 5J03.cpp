/*
* CODECHEF RECTANGL https://www.codechef.com/JAN18/problems/RECTANGL
* SUBMITTED
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,a,b,c,d;
  cin >> t;
  while(t--){
  cin >> a>>b>>c>>d;
  if(a*b == c*d) cout << "YES\n";
  else if(a*c == b*d) cout << "YES\n";
  else if(a*d == b*c) cout << "YES\n";
  else cout << "NO\n"; }
}