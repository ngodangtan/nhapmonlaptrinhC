//
// Created by Felix Ngo on 14/12/24.
//

#include <iostream>
#include <string>
using namespace std;



struct SinhVien {
  string msv;
  string hoten;
  float diemTB;
  string hocLuc;
};

SinhVien listSV[50];

/* Yêu cầu: Viet ham nhap thu cong
Phân tích:
Input:
+ SinhVien sv
*/

void cinSinhVien(SinhVien& sv) {
   cout << "Nhap MSSV" << endl;
   cin >> sv.msv;
   cout << "Nhap Ho va Ten SV" << endl;
   cin >> sv.hoten;
   cout << "Nhap Diem TB" << endl;
   cin >> sv.diemTB;
}

/* Yêu cầu: Viet ham nhap thu cong
Phân tích:
Input:
+ SinhVien sv
*/
void khoiTaoNgauNhienCacSV(int& sl) {
    listSV[0].msv = "F122234";
    listSV[0].hoten = "Nguyen Van A";
    listSV[0].diemTB = 9.1;

    listSV[1].msv = "F122233";
    listSV[1].hoten = "Nguyen Van B";
    listSV[1].diemTB = 8.1;

    listSV[2].msv = "F122231";
    listSV[2].hoten = "Nguyen Van C";
    listSV[2].diemTB = 6.1;

    listSV[3].msv = "F122230";
    listSV[3].hoten = "Nguyen Van D";
    listSV[3].diemTB = 4.1;
    sl = 4;
}

/* Yêu cầu: Viet ham xuat danh sach sinh vien
Phân tích:
Input:
+ SinhVien sv
*/
void printListSV(int sl) {
  for (int i=0;i<sl;i++) {
    cout << listSV[i].msv << endl;
    cout << listSV[i].hoten << endl;
    cout << listSV[i].diemTB << endl;
    cout << listSV[i].hocLuc << endl;
    cout << endl;
  }
}

/* Yêu cầu: Viet ham xuat ra sinh vien co diem TB cao nhat
Phân tích:
Input:
+ SinhVien sv
Output:
+ return sinhvien co diem tB cao nhat
*/
SinhVien sinhVienDTBCaoNhat(int sl) {
  SinhVien result;
  for (int i=0;i<sl;i++) {
    if (i == 0) {
      result = listSV[i];
    }

    if (listSV[i].diemTB > result.diemTB) {
     result = listSV[i];
    }
  }
  return result;
}

/* Yêu cầu: Viet ham tu dong update hoc luc sv
Phân tích:
Input:
+ SinhVien sv
*/
void updateXLHocLuc(int sl) {
  for (int i=0;i<sl;i++) {
    if (listSV[i].diemTB > 6 && listSV[i].diemTB < 8) {
      listSV[i].hocLuc = "Kha";
    } else if (listSV[i].diemTB > 8) {
      listSV[i].hocLuc = "Gioi";
    } else if (listSV[i].diemTB <= 6 && listSV[i].diemTB >= 5) {
      listSV[i].hocLuc = "TB";
    } else {
      listSV[i].hocLuc = "Yeu";
    }
  }
}

/* Yêu cầu: Viet ham tim sv theo ma sinh vien
Phân tích:
Input:
+ string msv, int sl
Output:
return Sinh vien
*/
SinhVien timSV(string mssv, int sl) {
  for (int i=0;i<sl;i++) {
    if (listSV[i].msv == mssv) {
      return listSV[i];
    }
  }
}

/* Yêu cầu: Viet ham tim sv theo diemTB
Phân tích:
Input:
+ SinhVien sv, int sl
Output:
return Sinh vien
*/
SinhVien timSVTheoDTB(float diemTB, int sl) {
  for (int i=0;i<sl;i++) {
    if (listSV[i].diemTB == diemTB) {
      return listSV[i];
    }
  }
}

int main(){
  SinhVien sv;
  int sl;
  //cinSinhVien(sv);

  cout << "Test: Xuat danh sach sinh vien" << endl;
  khoiTaoNgauNhienCacSV(sl);
  printListSV(sl);
  cout << "---------------------------------" << endl;

  cout << "Test: Xuat ra sinh vien co diem trung binh cao nhat" << endl;
  SinhVien resultMaxDTB = sinhVienDTBCaoNhat(sl);
  cout << "Sinh vien co diem cao nhat: " << endl;
  cout << resultMaxDTB.msv << endl;
  cout << resultMaxDTB.hoten << endl;
  cout << resultMaxDTB.diemTB << endl;
  cout << "---------------------------------" << endl;

  cout << "Test: Auto update Xep loai hoc luc" << endl;
  updateXLHocLuc(sl);
  printListSV(sl);
  cout << "---------------------------------" << endl;

  cout << "Test: Tim sinh vien voi mssv F122231" << endl;
  SinhVien ketQuaTimSV = timSV("F122231",sl);
  cout << "SV co ma so F122231 la: " << endl;
  cout << "Ten SV "  << ketQuaTimSV.hoten << endl;
  cout << "Diem TB "  << ketQuaTimSV.diemTB << endl;
  cout << "Hoc Luc "  << ketQuaTimSV.hocLuc << endl;
  cout << "---------------------------------" << endl;

  cout << "Test: Tim sinh vien voi diem TB 4.1" << endl;
  SinhVien ketQuaTimSV2 = timSVTheoDTB(4.1,sl);
  cout << "SV co diem TB 4.1 la: " << endl;
  cout << "Ten SV "  << ketQuaTimSV2.hoten << endl;
  cout << "MSV "  << ketQuaTimSV2.msv << endl;
  cout << "Hoc Luc "  << ketQuaTimSV2.hocLuc << endl;
  cout << "---------------------------------" << endl;
  return 0;
}