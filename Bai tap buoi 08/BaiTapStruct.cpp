//
// Created by Felix Ngo on 7/12/24.
//

#include <iostream>
#include <string>
using namespace std;

struct NhanVien{
  string maNV;
  string tenNV;
  float luongCoBan;
  int soNgayLam;
  float luongHangThang;
};

void printNhanVien(NhanVien nv) {
  cout << "--------------------" << endl;
  cout << "Ten " << nv.tenNV << endl;
  cout << "MSNV: " << nv.maNV << endl;
  cout << "Luong co ban: " << (int)nv.luongCoBan << endl;
  cout << "So ngay lam: " << nv.soNgayLam << endl;
  cout << "Luong hang thang: " << (int)nv.luongHangThang << endl;
  cout << "--------------------" << endl;
}

int main() {

  NhanVien nguyenVanA, nguyenVanB, nguyenVanC;
  nguyenVanA.maNV = "F1234";
  nguyenVanA.tenNV = "Nguyen Van A";
  nguyenVanA.luongCoBan = 5000000;
  nguyenVanA.soNgayLam = 30;
  nguyenVanA.luongHangThang =  nguyenVanA.luongCoBan / nguyenVanA.soNgayLam * 26;

  nguyenVanB.maNV = "F2234";
  nguyenVanB.tenNV = "Nguyen Van B";
  nguyenVanB.luongCoBan = 5000000;
  nguyenVanB.soNgayLam = 20;
  nguyenVanB.luongHangThang = nguyenVanB.luongCoBan / nguyenVanB.soNgayLam * 26;

  nguyenVanC.maNV = "F2234";
  nguyenVanC.tenNV = "Nguyen Van C";
  nguyenVanC.luongCoBan = 6000000;
  nguyenVanC.soNgayLam = 15;
  nguyenVanC.luongHangThang = nguyenVanC.luongCoBan / nguyenVanC.soNgayLam * 26;

  printNhanVien(nguyenVanA);
  printNhanVien(nguyenVanB);
  printNhanVien(nguyenVanC);
  return 0;
}