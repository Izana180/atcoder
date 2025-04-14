// 20250414
// 解説AC
// 実装力。題意翻訳

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,l=1;
    char a[729][730];
    // nullで埋めると勝手に端で終端する
    for(int i=0;i<729;i++)for(int j=0;j<730;j++)a[i][j]=0;
    cin>>n;
    a[0][0]='#';
    for(int k=0;k<n;k++){
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){
                // if((x==0)&&(y==0))continue;
                // 真ん中のブロック
                if((x==1)&&(y==1)){
                    for(int i=0;i<l;i++)for(int j=0;j<l;j++)a[x*l+i][y*l+j]='.';
                }
                // それ以外の8ブロック
                else{
                    for(int i=0;i<l;i++){
                        for(int j=0;j<l;j++){
                            a[x*l+i][y*l+j]=a[i][j];
                        }
                    }
                }
            }
        }
        l*=3;
    }
    for(int i=0;i<l;i++)cout<<a[i]<<endl;
    return 0;
}