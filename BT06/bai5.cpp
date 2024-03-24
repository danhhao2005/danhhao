#include <bits/stdc++.h>
using namespace std;

bool Check(int n){
    int tmp = 0;
     for (int i = 1; i <= n; i++){
        if (n % i == 0){
            tmp++;
        }
     }
     if (tmp == 2){
        return true;
     }
     return false;
}

int main(){
   int n;
   cin >> n;
   cout << Check(n);
}
