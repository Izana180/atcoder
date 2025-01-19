#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define りぴーと(i, n) for (int i = 0; i < (int)(n); i++)
#define じゅもんをとなえます ios::sync_with_stdio(false); cin.tie(nullptr);
#define nをにゅうりょくします int n; cin >> n;
#define ごはんがnこおしよせてきます vector<string> s(n); for(int i=0; i<n; i++) cin >> s[i];
#define たぶんたべきれるとおもいます string output = "Yes";
#define あまいものいっぱいなのでむりでした りぴーと(i,n-2){if(s[i]=="sweet")if(s[i+1]=="sweet"){output = "No";break;}}
#define こたえ cout << output << endl; return 0;

int main() {
	じゅもんをとなえます
	nをにゅうりょくします
	ごはんがnこおしよせてきます
	たぶんたべきれるとおもいます
	あまいものいっぱいなのでむりでした
	こたえ
}