#include <bits/stdc++.h>
using namespace std;
struct Rect{
float x, y;
};
struct ship{
Rect rect;
string id;
int dx, dy;
};
void move(ship& s){
 s.rect.x += s.dx;
 s.rect.y += s.dy;
};
void display(const ship& ship){
cout << ship.rect.x << " " << ship.rect.y;
}
int main(){
ship myShip;
cin >> myShip.rect.x >> myShip.rect.y >> myShip.dx >> myShip.dy;
getline (cin, myShip.id);
move (myShip);
display (myShip);
return 0;
}
