// 20250417
// 022-CubicCake(★2)

#include <iostream>

using namespace std;

long long getGCD(long long a, long long b){
    if(b==0) return a;
    else return getGCD(b, a%b);
}

int main(){
    // 直方体を切断して立方体を作る、最小切断回数を求める
    // 切る数が最小->立方体が最大
    // 3辺の最大公約数とって、a,b,c/GCD-1が答え
    long long a,b,c; cin >> a >> b >> c;
    long long gcd;
    gcd=getGCD(a,b);
    gcd=getGCD(gcd,c);
    long long ans=0;
    ans=a/gcd+b/gcd+c/gcd-3;

    cout << ans << endl;
    return 0;
}
