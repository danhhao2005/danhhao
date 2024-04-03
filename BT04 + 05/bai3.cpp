#include <bits/stdc++.h>
using namespace std;

bool check(int n){
stringstream ss;
ss << n;
string _n = ss.str();
int x = _n.length();
for (int i = 0; i < x/2.0; i++){
    if (_n[i] != _n[x - i - 1])
        return false;
}
return true;
}

int main(){
int A, B;
cin >> A >> B;
for (int i = A + 1; i < B; i++){
    if (check(i)){
        cout << i << " ";
    }
}
return 0;
}
