#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   int place[n][2];
   for(int i=0; i<n; i++){
    int x,y; cin >> x >> y;
    place[i][0]=x; place[i][1]=y;
   }


   for(int i=0; i<n; i++){
    int max_d=0;
    int ans;
    for(int j=0; j<n; j++){
        int d;
        d=round(pow((place[j][0]-place[i][0]),2))+round(pow((place[j][1]-place[i][1]),2));
        if(d>max_d){
            ans=j+1;
            max_d=d;
        }
    }
    cout << ans << endl;
   }
   
   return 0;
}