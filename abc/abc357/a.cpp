// 20250414
// やるだけ

#include <iostream>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int count = 0;
    for(int i=0; i<n; i++){
        int h; cin >> h;
        m-=h;
        if(m>=0)
            count++;
    }
    cout << count << endl;
    return 0;
}
