#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;
  int count=0;
  vector<int> A(N);
  for(int i=0; i<N; i++){
    cin >> A[i];
  }

  for(int i=0; i<N; i++){
    if(A[i]%2==0){
      A[i]=A[i]/2;
    }
    else{
      break;
    }
  }
  cout << count << endl;
  return 0;
}