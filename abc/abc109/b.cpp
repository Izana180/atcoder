#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<string>word_list(N);
  string ans = "Yes";
  for(int i=0; i<N; i++){
    cin >> word_list[i];
    if(i!=0){
      if(word_list[i-1].back()!=word_list[i].front()){
        ans = "No";
        break;
      }
    }
    }
  for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
      if(word_list[i]==word_list[j]){
        ans = "No";
      }
    }
  }
  cout << ans << endl;
  
  return 0;
}