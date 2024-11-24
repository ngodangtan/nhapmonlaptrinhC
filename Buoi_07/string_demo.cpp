//
// Created by Felix Ngo on 24/11/24.
//

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  string str = "Hello World";
  char s1[100];
  char s2[100] = {'T','h','u',' ','D','u','c','\0'};
  char s4[100] = "Thu Duc";
  for (int i = 0; i < strlen(s4); i++) {
    if (s4[i] >= 'A' && s4[i] <= 'Z') {
      cout << s4[i] << endl;
    }
  }
  return 0;
}