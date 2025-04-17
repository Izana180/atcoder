// 20250417
// 004-CrossSum(★2)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 矩形グリッドの各要素に対して、自分自身を含む同じ列,行にある要素の和を出力
    // 愚直解: 単に全要素を見て列行の和を取る O(WH(W+h-1))
    // WHとW+H-1を分けてWH+(W+H-1)の形になるようにすれば十分高速
    // 包除原理を用いてWHを前処理することを考える

    int h,w; cin >> h >> w;
    vector<vector<int> > a(h,vector<int>(w));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
        }
    }

    // 操作は(行の和)+(列の和)-(自分自身)
    // ->予め行の和と列の和を保持しておく
    vector<int> rowSum(h,0);
    vector<int> columnSum(w,0);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            rowSum[i]+=a[i][j];
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            columnSum[i]+=a[j][i];
        }
    }

    vector< vector<int> > ans(h, vector<int>(w,0));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            ans[i][j]=rowSum[i]+columnSum[j]-a[i][j];
            (j==w-1) ? cout << ans[i][j] << endl : cout << ans[i][j] << " ";
        }
    }

    return 0;
}
