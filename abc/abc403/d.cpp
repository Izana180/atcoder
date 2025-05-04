#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,d; cin >> n >> d;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    map<int, int> appCount;
    for(int i=0; i<n; i++){
        appCount[a[i]]++;
    }

    // d>=0(!?)
    int ans=0;

    if(d==0){
        for(auto it=appCount.begin(); it!=appCount.end(); it++)
            ans+=it->second-1;
    }

    else{
        for(auto it=appCount.begin(); it!=appCount.end(); it++){
            int key=it->first;
            int count=it->second;
            if(appCount.count(key+d)){
                int next=appCount[key+d];
                int remove=min(count, next);
                ans+=remove;
                appCount[key+d]-=remove;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
