#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> a(n);
    long long sum=0;
    long long sqSum=0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
        sqSum+=a[i]*a[i];
    }

    long long ans = (sum*sum-sqSum)/2;
    cout << ans << endl;
    return 0;
}
