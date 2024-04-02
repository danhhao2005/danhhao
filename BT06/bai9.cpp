#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  double x = rand();
  x = x / RAND_MAX;
  x = (int)x * n;
  cout << x;
return 0;
}
