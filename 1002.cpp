#include<bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> T;
    while(T--){
        int x1, y1, r1, x2, y2, r2;
        int res;
        double dis, subtract;

        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dis = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

        subtract = r1 > r2 ? r1 - r2 : r2 - r1;

        if(dis == 0 && r1 == r2) res = -1;
        else if(dis < r1 + r2 && (subtract < dis)) res = 2;
        else if(dis == r1 + r2 || dis == subtract) res = 1;
        else res = 0;

        cout << res;
    }
}