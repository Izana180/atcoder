#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<int> A(n);
   for(int i=0; i<n; i++){
    cin >> A[i];
   }

   int count=0;
   stack<string> s;
   for(int i=0; i<n-1; i++){
    for(int j=n-1; i<j; j--){
        if(A[j]<A[j-1]){
            count ++;
            s.push(to_string(A[j])+' '+to_string(A[j-1]));
            swap(A[j],A[j-1]);
        }
    } 
   }
   cout << count << endl;
   while(s.empty()){
    cout << s.bottom() << endl;
    s.pop(s[0])
   }
   
   
   return 0;
}