#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin>>A>>B>>C;
  if((A==B&&B==C&&C==A)||(A!=B&&B!=C&&C!=A)){
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }
  
  return 0;
}