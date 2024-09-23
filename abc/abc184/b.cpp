#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,x; cin >> n >> x;
   string s; cin >> s;
   int score=x;
   for(int i=0; i<s.length(); i++){
    if(s[i]=='o'){
        score++;
    }
    else{
        if(score==0){
            continue;
        }
        else{
            score--;
        }
    }
   }
   cout << score << endl;
   
   return 0;
}