#include<bits/stdc++.h>
using namespace std;

int T;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> T;

    while(T--){
        int cnt = 0;
        int x1, y1, x2, y2, n;
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        while(n--){
            int cx, cy, r;
            cin >> cx >> cy >> r;

            bool sic = sqrt(pow(cx-x1, 2) + pow(cy-y1,2)) <= r;
            bool eic = sqrt(pow(cx-x2, 2) + pow(cy-y2, 2)) <= r;

            if(sic!=eic) cnt++;
        }
        cout << cnt << endl;
    } 
}