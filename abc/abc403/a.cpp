// 本番AC
// やるだけ.

#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            sum+=a[i];
        }
    }

    cout << sum << endl;
    return 0;
}
