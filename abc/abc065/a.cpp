#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X,A,B;
  cin >> X >> A >> B;
  int days_remain = A-B;
  if(days_remain>=0){
    cout << "delicious" << endl;
  }
  else{
    if(-(days_remain)<=X){
      cout << "safe" << endl;
    }
    else{
      cout << "dangerous" << endl;
    }
  }
  
  return 0;
}