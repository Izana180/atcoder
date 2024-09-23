#include <bits/stdc++.h>
using namespace std;

long base(long s, long k){
    long ans=0;
    for(char x:to_string(s)){
        ans*=k;
        ans+=x-'0';
    }
    return ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long k,a,b; cin >> k >> a >> b;
   cout << base(a,k)*base(b,k) << endl;

   
   return 0;
}