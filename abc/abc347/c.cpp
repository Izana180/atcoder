#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long n,a,b; cin >> n >> a >> b;
   
   long long min; cin >> min; min%=(a+b);
   if(min==0) min=a+b;
   long long max=min;
   bool genkai = false;
   for(long long i=1; i<n; i++){
    long long d; cin >> d; d%=(a+b);
    long diff = max-min;
    if(d<min) min=d;
    if(d>max) max=d;
    if(diff>(a-1)){
        if(min+(a+b)-max<(a-1)){
            continue;
        }
        else{
            genkai = true; //No
            break;
        }
    }
   }
   if(genkai) cout << "No" << endl;
   else cout << "Yes" << endl;
   
   return 0;
}