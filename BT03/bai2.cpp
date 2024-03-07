#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void modifyPointByValue(Point p) {
    p.x = 100;
    p.y = 200;
}

void modifyPointByReference(Point& p) {
    p.x = 100;
    p.y = 200;
}

int main() {
    Point myPoint = {50, 75};
    cout << myPoint.x << ", " << myPoint.y << endl;

    modifyPointByValue(myPoint);
    cout << myPoint.x << ", " << myPoint.y << endl;

    modifyPointByReference(myPoint);
    cout << myPoint.x << ", " << myPoint.y << endl;

    return 0;
}
