#include<bits/stdc++.h>
using namespace std;



int main(){
    double x;
    cin >> x;
//lam tron bang ham ceil(), floor()
    double tmp = x - (int)x;
    //if (tmp >= 0.5){
      //  cout << ceil(x);
    //}
    //else cout << floor(x);
//khong su dung ham ceil(), floor()
    if (tmp >= 0.5){
        cout << x + (1 - tmp);
    }
    else cout << (int)x;
return 0;
}
