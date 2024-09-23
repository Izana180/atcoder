#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<string> P(n);
   for(int i=0; i<n; i++){
    cin >> P[i];
   }
   int q; cin >> q;
   for(int i=0; i<q; i++){
    string a,b; cin >> a >> b;
    int queue_a; int queue_b;
    for(int j=0; j<n; j++){
        if(P[j]==a){
            queue_a=j;
        }
        if(P[j]==b){
            queue_b=j;
        }
    }
    if(queue_a<queue_b) cout << P[queue_a] << endl;
    else cout << P[queue_b] << endl;
   }
   
   return 0;
}