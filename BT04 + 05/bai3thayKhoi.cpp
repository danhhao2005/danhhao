#include <bits/stdc++.h>
using namespace std;
bool check (int n){
int num = 0;
int org = n;
while (n > 0){
    num = num * 10 + n % 10;
    n /= 10;
}
return num == org;
}
int count (int a, int b){
    int cnt = 0;
for (int i = a; i <= b; i++){
if (check(i)){
    cnt++;
}
}
return cnt;
}
int main(){
int t;
cin >> t;
for (int i = 0; i < t; i++){
        int a, b;
    cin >> a >> b;
    int res = count (a, b);
    cout << res << endl;
}
return 0;
}
