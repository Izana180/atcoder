// 20250413解説
// 方針上愚直にやっても間に合うならただ翻訳する

// これ以上傷つかないように
// ニュースを見ないで電気を消して
// 高く水飛沫上げよう
// その理由ごと反射して
// あなたが孤独でいてくれる限り
// 耳を塞げないから手を繋いでいよう

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,m,k; cin >> n >> m >> k;
    vector<vector<bool>> isKeyUsed(m, vector<bool>(n,false));
    vector<string> testResult(m);

    for(int i=0; i<m; i++){
        int c; cin >> c;
        for(int j=0; j<c; j++){
            int a; cin >> a;
            isKeyUsed[i][a-1]=true;
        }
        cin >> testResult[i];
    }

    int count=0;
    for(int i=0; i<(1<<n); i++){
        vector<bool> isKeyValid(n);
        for(int j=0; j<n; j++){
            isKeyValid[j]=(i&(1<<j)) ? true : false;
        }
        bool judge=true;
        for(int j=0; j<m; j++){
            int count=0;
            for(int p=0; p<n; p++){
                if(isKeyUsed[j][p]&&isKeyValid[p])
                    count++;
            }
            if(count>=k&&testResult[j]=="x")
                judge=false;
            if(count<k&&testResult[j]=="o")
                judge=false;
        }
        if(judge)
            count++;
    }
    cout << count << endl;
    return 0;
}
