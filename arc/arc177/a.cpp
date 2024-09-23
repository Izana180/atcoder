#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,c,d,e,f,n; cin >> a >> b >> c >> d >> e >> f >> n;

   bool judge=true;
   vector<int> x(n);
   for(int i=0; i<n; i++){
    cin >> x[i];
   }


   for(int i=0; i<n; i++){
    while(f>0&&x[i]>=500){
        x[i]-=500;
        f--;
    }
    while(e>0&&x[i]>=100){
        x[i]-=100;
        e--;
    }
    while(d>0&&x[i]>=50){
        x[i]-=50;
        d--;
    }
    while(c>0&&x[i]>=10){
        x[i]-=10;
        c--;
    }
    while(b>0&&x[i]>=5){
        x[i]-=5;
        b--;
    }
    while(a>0&&x[i]>=1){
        x[i]-=1;
        a--;
    }


   }
   for(int i=0; i<n; i++){
    if(x[i]!=0) judge=false;
   }
   
   if(judge) cout << "Yes" << endl;
   else cout << "No" << endl;

   return 0;
}