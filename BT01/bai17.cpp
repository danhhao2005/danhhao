#include <bits/stdc++.h>
using namespace std;
int main(){
int year;
cin >> year;
if ((year % 4 == 0 && year % 10 != 0) || (year % 400 == 0)){
cout << "true";}
else cout << "false";
return 0;
}
