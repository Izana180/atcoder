// 20250413

#include <iostream>
using namespace std;

int tmp[110];

int main(){
    int n,l,r; cin >> n >> l >> r;
    int index=0;
    for(int i=1; i<=n; i++){
        if(i<l)
            cout << i << endl;
        if(l<=i&&i<=r){
            tmp[index]=i;
            index++;
        }
        if(i==r){
            index--;
            while(index>=0){
                cout << tmp[index] << endl;
                index--;
            }
        }
        if(i>r)
            cout << i << endl;
    }
    return 0;
}
