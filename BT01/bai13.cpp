#include <bits/stdc++.h>
using namespace std;
int main(){
int x1, x2, y1, y2;
cin >> x1 >> y1 >> x2 >> y2;
int X = x2 - x1;
int Y = y2 - y1;
int res = sqrt (X*X + Y*Y);
cout << res;
return 0;
}
