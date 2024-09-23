#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, D;
  cin >> A >> B >> D;
  
  int i;
  i = A;
  while(i <= B){
    cout << i << " ";
    i += D;
  }
  cout << endl;
}