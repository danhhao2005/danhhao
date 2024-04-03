#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int a[n];
for (int i = 0; i < n; i++){
    cin >> a[i];
}
int min = 9999999;
int max = -9999999;
int cntc = 0;
int cntl = 0;
for (int i = 0; i < n; i++){
    if (a[i] > max){
        max = a[i];
    }
    if (a[i] < min){
        min = a[i];
    }
    if (a[i] % 2 == 0){
        cntc++;
    }
    if (a[i] % 2 != 0){
        cntl++;
    }
}
cout << max << " " << min << " " << cntc << " " << cntl;
return 0;
}
