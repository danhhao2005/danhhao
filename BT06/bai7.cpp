#include <bits/stdc++.h>
using namespace std;

void Print(int space, int star){
    int tmp1 = (space - star) / 2;
    int tmp2 = space - tmp1 - star;
    for (int i = 0; i < tmp1; i++){
        cout << " ";
    }
    for (int i = 0; i < star; i++){
        cout << "*";
    }
    for (int i = 0; i < tmp2; i++){
        cout << " ";
    }
    cout << endl;
}

void Triangle (int n){
    for (int i = 1; i <= n; i++){
         Print (2 * n - 1, 2 * i - 1);
    }
}

int main(){
   int n;
   cin >> n;
   Triangle (n);
   return 0;
}
