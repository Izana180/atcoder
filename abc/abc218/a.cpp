#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N; string S;
   cin >> N >> S;
   if(S[N-1]=='o'){
    cout << "Yes" << endl;
   }
   else{
    cout << "No" << endl;
   }
   
   return 0;
}