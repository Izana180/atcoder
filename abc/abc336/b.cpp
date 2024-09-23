#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int ctzx = 0;
  for(int i=1; i<=30 ; i++){
    if(N % int(pow(2, i)) == 0){
      ctzx ++;
    }
  }
  cout << ctzx << endl;
  
  return 0;
}