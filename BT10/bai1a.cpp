#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* str1, const char* str2) {
     int n=strlen(str1);
     int m=strlen(str2);
    char* c=new char[n+m+1];
    strcpy(c, str1);
    strcpy(c + n, str2);

    return c;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    char* c = concat(str1, str2);
     cout << c;
    delete[] c;

    return 0;
}
