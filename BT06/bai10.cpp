#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        a[i] = rand() % 50;
    }
    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = i + 1; k < n - 1; k++){
                if (a[i] + a[j] + a[k] % 25 == 05){
                    cout << a[i] << " " << a[j] << " " << a[k];
                }
            }
        }
    }
return 0;
}
