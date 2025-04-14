// 20250414
// やる

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    int upper=0;
    int lower=0;
    for(int i=0; i<s.length(); i++){
        if('a'<=s[i]&&s[i]<='z')
            lower++;
        if('A'<=s[i]&&s[i]<='Z')
            upper++;
    }

    if(lower<upper){
        for(int i=0; i<s.length(); i++){
            if('a'<=s[i]&&s[i]<='z')
                s[i]-=32;
        }
    }
    else{
        for(int i=0; i<s.length(); i++){
            if('A'<=s[i]&&s[i]<='Z')
                s[i]+=32;
        }
    }
    cout << s << endl;
}
