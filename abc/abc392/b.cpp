#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    map<int, int> isInclude;
    for(int i=0; i<m; i++){
        isInclude[a[i]]++;
    }

    int count=0;
    for(int i=1; i<=n; i++){
        if(!isInclude[i])
            count++;
    }
    cout << count << endl;
    for(int i=1; i<=n; i++){
        if(!isInclude[i]){
            cout << i << endl;
        }
    }
    return 0;
}
