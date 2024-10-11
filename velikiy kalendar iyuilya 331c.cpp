#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, max = 0, cnt = 0;
    cin >> a;
    while(a != 0){
        string s = to_string(a);
        for (int i = 0; i < s.size(); i++){
            if((s[i] - '0') > max){
                max = s[i] - '0';
            }
        }a -= max;
        max = 0;
        cnt++;
    }cout << cnt;
    return 0;
}