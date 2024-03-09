#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int a[n];
double avg = 0;
double psai = 0;
for (int i = 0; i < n; i++){
    cin >> a[i];
    avg += a[i];
}
avg = avg / n;
for (int i = 0; i < n; i++){
    psai += pow (a[i] - avg, 2);
}
psai = psai / n;
cout << avg << " " << psai;
return 0;
}
