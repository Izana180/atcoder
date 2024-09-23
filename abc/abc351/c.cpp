#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<Int> A(n);
   for(int i=0; i<n; i++){
    cin >> A[i];
   }

   bool willcontinue=true;
   while(willcontinue){
    for(int i=0; i<A.size(); i++){
        if(A[A.size()-2]!=A[A.size()-1]){
            willcontinue=false;
            break;
        }
        else if(A[i]==A[i+1]){
            Int temp; temp=A[i]+1;
            auto it=A.begin()+i;
            A.erase(it);
            A.erase(it);
            A.insert(it,temp);
            // cout << i << ' ';
            break;
       }
    }
   }

    // cout << endl;
    // for(int i=0; i<A.size(); i++){
    // cout << A[i];
    // }
    // cout << endl;
   cout << A.size() << endl;
   
   return 0;
}