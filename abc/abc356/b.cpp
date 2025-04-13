// 20250413

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }

    vector<int> sum(m,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x; cin >> x;
            sum[j]+=x;
        }
    }
    for(int i=0; i<m; i++){
        if(sum[i]<a[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
