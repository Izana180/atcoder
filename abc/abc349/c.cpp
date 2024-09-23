#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s,t; cin >> s >> t;
   for(int i=0; i<3; i++){
    t[i]+=32;
   }
   int number=0;
   bool judge=true;
   for(int i=0; i<2; i++){
    if(s.find(t[i])==-1){
        judge=false;
        // cout << "inv";
        break;
    }
    for(int j=0; j<s.length(); j++){
        if(s.find(t[i])!=-1){
            if(t[i]==s[j]){
                if(j>=number){
                    number=j;
                    judge=true;
                }
                else{
                    judge=false;
                    // cout << ' '+to_string(i)+"error";
                    break;
                }
            }
        }
    }
    // cout << number;
   }
   if(judge){
   if(t[2]=='x'){
    if(s.find(t[2])!=-1){
        for(int j=0; j<s.length(); j++){
            if(t[2]==s[j]){
                if(j>=number){
                    number=j;
                    judge=true;
                    continue;
                }
                else{
                    judge=false;
                    // cout << "2-1";
                    break;
                }
            }
        }
    }
    else{
        if(judge) judge=true;
    }
   }
   else{
    if(s.find(t[2])!=-1){
        for(int j=0; j<s.length(); j++){
            if(t[2]==s[j]){
                if(j>=number){
                    number=j;
                    judge=true;
                    continue;
                }
                else{
                    judge=false;
                    // cout << "2-2";
                    break;
                }
            }
        }
    }
    else{
        judge=false;
    }
   }
   }

   if(judge) cout << "Yes" << endl;
   else cout << "No" << endl;
   
   return 0;
}