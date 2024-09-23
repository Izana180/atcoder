//再帰関数のメモ化
#include <bits/stdc++.h>
using namespace std;

map<long long,long long> tmp;
long long bb(long long N){
    if(tmp.count(N)) return tmp[N]; //キーNが存在すれば、その返り値を返す
    if(N==1) return 0;

    return tmp[N]=bb(N/2)+bb((N+1)/2)+N; //普通にNについて処理して、キーNのところに保持する
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; cin >> N;
   cout << bb(N) << endl;
   return 0;
}