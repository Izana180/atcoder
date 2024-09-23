#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B;
  cin >> A >> B;
  string S;
  cin >> S;
  
  string result = "Yes";
  
  if(S.length()!=A+B){
    result ="No";
  }
  for(int i=0; i<A; i++){
    if(S[i]>'9'||S[i]<'0'){
      result="No";
    }
    if(S[A]!='-'){
      result="No";
    }
  }
  for(int i=A+1; i<B; i++){
    if(S[i]>'9'||S[i]<'0'){
      result="No";
    }
  }
  
  
  cout << result << endl;
  
  return 0;
}