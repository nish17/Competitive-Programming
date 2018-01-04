#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int t;
  cin >> t;
  long long int a[t],b[t],c[t],MAX=0,MIN=0;
  for(int i=0; i<t; i++){
    cin >> a[i] >> b[i];
    c[i] = a[i] - b[i];
  }

  // for(int i=0; i<t; i++){
  //   printf("c= %d ",c[i]);
  // }
  
  //   cout << endl;
    MAX = MIN = c[0];
  for(int i=0; i<t; i++){
    for(int j=0; j<t; j++){
      if(c[i] > MAX) MAX = c[i];
      else if(c[i] < MIN) MIN = c[i];
    }
  }
  // cout << "MAX = " << abs(MAX) << endl;
  // cout << "MIN = " << abs(MIN) << endl;
  if(MAX > abs(MIN)) cout << "1 " << abs(MAX) << endl;
  else if(MAX < abs(MIN)) cout << "2 " << abs(MIN) << endl;
  else if(abs(MAX) > MIN) cout << "1 " << abs(MAX) << endl;
  else if(abs(MAX) < MIN) cout << "2 " << abs(MIN) << endl;
  return 0;
}