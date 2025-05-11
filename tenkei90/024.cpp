// 20250418
// 024-Select+-One(★2)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 偶奇(パリティ)に注目する
    // 要素数1の場合
    // 2数の差がk以下 && (kが偶数) ? 偶奇一致 : 偶奇不一致

    // 要素数nの場合
    // 差の合計がk以下 && (kが偶数) ? 偶奇の一致する要素の数と一致しない要素の数の差が偶数 : 奇数
    int n,k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    long long dif=0;
    for(int i=0; i<n; i++){
        dif+=abs(a[i]-b[i]);
    }
    if(dif>k){
        cout << "No" << endl;
        return 0;
    }

    
}