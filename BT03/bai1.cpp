#include <bits/stdc++.h>
using namespace std;
struct point {
int x, y;
};
void printPoint (point p){
cout << p.x << " " << p.y;
}
int main(){
point myPoint;
myPoint.x = 10;
myPoint.y = 20;
printPoint(myPoint);
return 0;
}
