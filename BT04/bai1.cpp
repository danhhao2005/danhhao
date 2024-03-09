#include <bits/stdc++.h>
using namespace std;
int main(){
bool anpha = false;
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){
    cin >> a[i];
}
int k = 0;
for (int i = 0; i < n; i++){
     int tmp = a[k];
     if (a[i + 1] == tmp){
        cout << "yes";
        anpha = true;
        k++;
     }
}
if (anpha == false){ cout << "no"; }
return 0;
}
