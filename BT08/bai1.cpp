#include <bits/stdc++.h>
using namespace std;

//dao xau
void reverse(char *str) {
  char *start = str;
  char *end = str + strlen(str) - 1;
  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

//xoa ki tu
void delete_char(char *str, char c) {
  char *ptr = str;
  while (*ptr != '\0') {
    if (*ptr == c) {
     while (*ptr != '\0') {
        *ptr = *(ptr + 1);
        ptr++;
      }
      ptr--;
    } else {
      ptr++;
    }
  }
}

//don phai
void pad_right(char *str, int n) {
  int len = strlen(str);
  for (int i = len; i < n; i++) {
    str[i] = ' ';
  }
  str[n] = '\0';
}


//don trai
void pad_left(char *str, int n) {
  int len = strlen(str);
  // Di chuyển các ký tự sang bên phải n vị trí
  for (int i = len - 1; i >= 0; i--) {
    str[i + n] = str[i];
  }
  // Ghi đè n ký tự đầu tiên bằng ' '
  for (int i = 0; i < n; i++) {
    str[i] = ' ';
  }
  str[n + len] = '\0';
}

//cat xau
void truncate(char *str, int n) {
  str[n] = '\0';
}

//kiem tra doi xung
bool is_palindrome(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return false;
    }
  }
  return true;
}

//loc trai
void trim_left(char *str) {
  while (*str == ' ') {
    str++;
  }
}

//loc phai
void trim_right(char *str) {
  int len = strlen(str);
  while (str[len - 1] == ' ') {
    len--;
  }
  str[len] = '\0';
}


int main() {
  char str[] = "Hello, world!";

  reverse(str);
  cout << str << endl;

  delete_char(str, 'l');
  cout << str << endl;

  pad_right(str, 15);
  cout << str << endl;

  pad_left(str, 20);
  cout << str << endl;

  truncate(str, 10);
  cout << str << endl;

  if (is_palindrome(str)) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;
  }

  trim_left(str);
  cout << str << endl;

  trim_right(str);
  cout << str << endl;

  return 0;
}

