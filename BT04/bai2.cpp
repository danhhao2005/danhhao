#include <bits/stdc++.h>
using namespace std;
int main(){
bool anpha = true;
string s;
cin >> s;
double x = s.length();

    for (int i = 0; i < x/2.0; i++){
            if (s[i] != s[x - i - 1]){
                anpha = false;
        }
    }
    if (anpha == true){
        cout << "yes";
    }
    else cout << "no";
return 0;
}


