#include <iostream>
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    if(a*b==c||b*c==a||c*a==b){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
