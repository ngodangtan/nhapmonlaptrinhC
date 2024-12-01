//
// Created by Felix Ngo on 30/11/24.
//

#include <iostream>
#include <string.h>
using namespace std;

void inKyTuSo(char text[]) {
  for (int i = 0; i < strlen(text); i++) {
    if (isdigit(text[i])) {
      cout << text[i];
    }
  }
  cout << endl;
}

bool isKyTuDacBiet(char kyTu) {
  if (isdigit(kyTu)) {
    return  false;
  }

  if (isalpha(kyTu)) {
    return false;
  }

  return true;
}

bool isChuoiDoiXung(char text[]) {
  for (int i = 0; i < strlen(text) / 2; ++i) {
    if (text[i] != text[strlen(text) - i - 1]) {
      return false;
    }
  }
  return true;
}

void demKyTuHoa(char text[]) {
  int count = 0;
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] >= 'A' && text[i] <= 'Z') {
      cout << text[i];
      count++;
    }
  }
  cout << endl;
  cout << "So ky tu hoa: " << count << endl;
}

void demKyTuThuong(char text[]) {
  int count = 0;
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] >= 'a' && text[i] <= 'z') {
      cout << text[i];
      count++;
    }
  }
  cout << endl;
  cout << "So ky tu thuong: " << count << endl;
}

void demKyTuDacBiet(char text[]) {
  int count = 0;
  for (int i = 0; i < strlen(text); i++) {
    if (isKyTuDacBiet(text[i])) {
      cout << text[i];
      count++;
    }
  }
  cout << "So ky tu dac biet: " << count << endl;
}

int main() {
  char textSample[] = "Hello World! 123456";
  char textSample2[] = "madam"; // chuoi doi xung
  char textDaoNguoc[50];
  inKyTuSo(textSample);
  demKyTuHoa(textSample);
  demKyTuThuong(textSample);
  demKyTuDacBiet(textSample);
  // Dao nguoc chuoi
  for (int i = strlen(textSample) - 1, j = 0; i >= 0; --i,j++) {
    textDaoNguoc[j] = textSample[i];
  }
  cout << textDaoNguoc << endl;
  // chuoi doi xung
  if (isChuoiDoiXung(textSample2)) {
    cout << textSample2 << " la chuoi doi xung" << endl;
  }

  // kiem tra chuoi co ky tu dac biet
  for (int i = 0; i < strlen(textSample); i++) {
    if (isKyTuDacBiet(textSample[i])) {
      cout << textSample << " co ky tu dac biet" << endl;
      break;
    }
  }

  // kiem tra chuoi co chu so
  for (int i = 0; i < strlen(textSample); i++) {
    if (isdigit(textSample[i])) {
      cout << textSample << " co ky tu so" << endl;
      break;
    }
  }
  return 0;
}