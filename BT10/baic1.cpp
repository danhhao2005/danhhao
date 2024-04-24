#include <bits/stdc++.h>

using namespace std;

void reverse(const char a[]){
     int x = strlen(a);
     vector <char> _a;
     for (int i = 0; i < x; i++){
        _a.push_back(a[i]);
     }
     for (int i = x; i >= 0; i--){
        cout << _a[i] ;
     }
     cout << endl;
}

void delete_char(const char a[], char c){
     int x = strlen(a);
     char *b = new char[x];

     for (int i = 0; i < x; i++){
        b[i] = a[i];
     }
      int sl = 0;
      for (int i = 0; i < x; i++){
        if (b[i] == c){
            sl++;
        }
      }

     for (int i = 0; i < x - sl + 1; i++){
        if (b[i] == c){
            b[i] = b[i + 1];
        }
     }
     for (int i = 0; i < x - sl + 1; i++){
        cout << b[i];
     }
     cout << endl;
}

void pad_right(const char a[], int n){
     int x = strlen(a);
     vector <char> b;
     for (int i = 0; i < x; i++){
        b.push_back(a[i]);
     }
     if (x > n){
        for (int i = 0; i < x; i++){
        cout << b[i];
     }
     cout << endl;
     }
     else {
     for(int i = 0; i < n; i++){
        b.push_back('0');
     }
     for (int i = 0; i < n; i++){
        cout << b[i];
     }
     cout << endl;

    }
}

void truncate(const char a[], int n){
    int x = strlen(a);
    char *b = new char[x];
    for (int i = 0; i < x; i++){
        b[i] = a[i];
    }
    if (n > x){
        cout << "invalid";
    }
    else {
        for (int i = n - 1; i < x; i++){
            b[i] == ' ';
        }
    }
    for (int i = 0; i < n; i++){
        cout << b[i];
    }
    cout << endl;
}

void trim_left(const char a[]){
    int x = strlen(a);
    char* b = new char[x];
    for (int i = 0; i < x; i++){
        b[i] = a[i];
    }
    int m = 0;
    for (int i = 0; i < x; i++){
        if (a[i] == ' ' && a[i + 1] != ' '){
            b[i] == b[i + 1];
            m++;
        }
    }
    for (int i = 0; i < m; i++){
        cout << b[i];
    }
    cout << endl;
}


int main(){
    char a[] = " hello";
    reverse(a);
    delete_char(a,'h');
    pad_right(a,10);
    truncate(a,3);
    trim_left(a);
return 0;
}
