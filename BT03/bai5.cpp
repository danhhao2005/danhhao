#include <bits/stdc++.h>
using namespace std;
struct point {
int a, b;
};

bool Rect (int x, int y, int w, int h, point p){
  if (p.a >= x && p.a <= x + h && p.b >= y && p.b <= y + w){
    return true;
  }
  else return false;
}

int main(){
point myPoint;
cin >> myPoint.a >> myPoint.b;
int x, y, w, h;
cin >> x >> y >> w >> h;
cout << Rect(x, y, w, h, myPoint);
return 0;
}
