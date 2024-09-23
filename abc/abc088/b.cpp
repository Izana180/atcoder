#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  int A[110];
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  
  sort(A, A+N, greater<int>());
  
  int score_A=0;
  int score_B=0;
  for(int i=0; i<N; i++){
    if(i%2==0){
      score_A+=A[i];
    }
    else{
      score_B+=A[i];
    }
  }
  
  cout << score_A-score_B << endl;
  
  return 0;
}