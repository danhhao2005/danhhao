
#include <bits/stdc++.h>
using namespace std;
struct point {
int x, y;
};

void midPoint (point p1, point p2){
double X = (p1.x + p2.x) / 2.0;
double Y = (p1.y + p2.y) / 2.0;
cout << X << " " << Y;
}

int main(){
point myPoint1;
cin >> myPoint1.x >> myPoint1.y;
point myPoint2;
cin >> myPoint2.x >> myPoint2.y;
midPoint(myPoint1, myPoint2);
return 0;
}
