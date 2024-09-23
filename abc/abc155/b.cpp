#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  int A[110];
  string result = "APPROVED";
  for(int i=0; i<N; i++){
    cin >> A[i];
    if(A[i]%2==0){
      if(A[i]%3!=0&&A[i]%5!=0){
        result="DENIED";
        break;
      }
    }
  }
  cout << result << endl;
  
  return 0;
}