//finally AC
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; cin >> N;
   string ans;
   while(N>0){
    if(N%2==0){
        N/=2;
        ans.push_back('B');
    }
    else{
        N-=1;
        ans.push_back('A');
    }
   }
   reverse(ans.begin(),ans.end());
   cout << ans << endl;

   return 0;
}