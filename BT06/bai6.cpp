#include <bits/stdc++.h>
using namespace std;

int Caculate (int n, int m){
    int tmp;
    while (m != 0){
        tmp = n % m;
        n = m;
        m = tmp;
    }
    return n;
}

int main(){
  int m, n;
  cin >> m >> n;
  cout << Caculate(n, m);
  return 0;
}
