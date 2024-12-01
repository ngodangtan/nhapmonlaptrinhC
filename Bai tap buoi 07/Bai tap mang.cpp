//
// Created by Felix Ngo on 30/11/24.
//

#include <iostream>
using namespace std;

const int SIZE = 15;
int arr1[SIZE];
int arr2[] = {};
float arr3[SIZE] = {0.8, 5.6, 9.1, 7.3, 10.0, 5.9, 7.2, 9.3, 8.0, 8.7};
int arr4[SIZE] = {1,2,3,4,5,5,7,6,-3};


void timCacCapPhanTuCoTongBangSoNguyenK(int arr[], int n, int K) {
  cout << "Cac cap co tong bang " << K << " la:" << endl;

  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] + arr[j] == K) {
        cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
      }
    }
  }
}

/* 9. Ham kiem tra value co nam trong mang hay khong
Input:
+ n: int
Output:
+ return bool true value co ton tai trong mang
              false value khong ton tai trong mang
*/

bool isHaveValue(float arr[], float value) {
  for (int i=0;i<SIZE;i++) {
    if (arr[i] == value) {
      return true;
    }
  }
  return false;
}

/* Ham kiem tra mot so co phai la so chinh phuong
Input:
+ n: int
Output:
+ return bool true so chinh phuong
              false ko phai so chinh phuong
*/

bool isSoChinhPhuong(int n) {
  if (n < 1) {
    return false;
  }

  for (int i = 1; i * i <= n; ++i) {
    if (i * i == n) {
      return true;
    }
  }
  return false;
}

/* Ham kiem tra mot so co phai la so nguyen to hay khong
Input:
+ n: int
Output:
+ return bool true so nguyen to
              false ko phai so nguyen to
*/

bool isSoNguyenTo(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}


/* Yeu cau: Viet ham kiem tra mang co phai mang tang dan hay khong ?
Input:
+ arr[] int
+ n: int
Output:
+ return bool true mang tang dan
              false ko phai mang tang dan
*/

bool isArrTangDan(int array[], int n) {
  for (int i = 0; i < n; ++i) {
    if (array[i] < array[i-1]) {
      return false;
    }
  }
  return true;
}

/* Yeu cau: Viet ham kiem tra mang co phai mang doi xung hay khong ?
Input:
+ arr[] int
+ n: int
Output:
+ return bool true mang doi xung
              false ko phai mang doi xung
*/

bool isArrDoiXuong(int arr[], int n) {
  for (int i = 0; i < n / 2; ++i) {
    if (arr[i] != arr[n - i - 1]) {
      return false;
    }
  }
  return true;
}

/* Yeu cau: Viet ham kiem tra phan tu co trong mang hay khong ?
Input:
+ arr[] int
+ n: int
Output:
+ return bool true co trong mang
              false khong co trong mang
*/

bool isHaveInArray(int arr[], int value, int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == value) {
      return true;
    }
  }

  return false;
}

void printIntArr(int arr[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}

void printFloatArr(float arr[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}

/* Yeu cau: 1. Viet ham tao n phan tu ngau nhien [8;15] gia tri phan tu khong trung nhau [-369;369] ?
Input:
+ a[] int
+ n: int
Output:
+ void => update arr1
*/

void autoArr1(int& n) {
  // n se 8...15 = 8+[0;7]
  n = 8 + rand()%8;
  cout << "size n " << n << endl;
  for (int i = 0; i < n; i++) {
    // value [-369;369] = -369 + [0;738]
    int value =  -369 + rand()%739;
    //cout << value << endl;
    if (i == 0) {
      arr1[i] = value;
    } else if (!isHaveInArray(arr1, value, n)) {
      arr1[i] = value;
    }
  }
}

/* Yeu cau: 2. Viet ham tao mang doi xung, so luong [8;15] gia tri mang [-51;78] ?
Input:
+ a[] int
+ n: int
Output:
+ void => update arr2
*/

void autoArr2(int n) {
  int halfSize = (n + 1) / 2; // Tính nửa đầu mảng
  for (int i = 0; i < halfSize; i++) {
    arr2[i] = rand() % 100; // Giá trị ngẫu nhiên từ 0 đến 99
  }

  for (int i = 0; i < n / 2; i++) {
    arr2[n - 1 - i] = arr2[i]; // Sao chép phần đối xứng
  }
}

void testMangTangDan() {
  int array[5] = {1,2,3,4,5};
  if (isArrTangDan(array, 5)) {
    cout << "Day la mang tang dan" << endl;
  }
}

void testSoNguyenTo(int n) {
  for (int i = 0; i < n; i++) {
    if (isSoNguyenTo(arr1[i])) {
      cout << "Mang arr1 co chua so nguyen to: "  << arr1[i] << endl;
    }
  }
}

void testSoChinhPhuong(int n) {
  for (int i = 0; i < n; i++) {
    if (isSoChinhPhuong(arr1[i])) {
      cout << "Mang arr1 co chua so chinh phuong: " << arr1[i] << endl;
    }
  }
}

void testDemSoLanXuatHienPhanTuTrongMang() {
  int count = 0;
  for (int i = 0; i < SIZE; i++) {
    cout << arr4[i] << " ";
    if (arr4[i] == 5) {
      ++count;
    }
  }
  cout << "So lan xuat hien phan tu 5 trong mang arr4 la " << count << " lan" << endl;
}

void traVeCacSoAmTrongMang(int n) {
  for (int i = 0; i < n; i++) {
    if (arr1[i] < 0) {
      cout << arr1[i] << " ";
    }
  }
  cout << endl;
}

float tongCacSoDuong(int arr[], int n) {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      sum += arr[i];
    }
  }
  return sum;
}

int main() {
  srand(time(0));
  int m = 0;
  autoArr1(m);
  autoArr2(m);

  printf("arr1");
  printIntArr(arr1, m);
  printf("arr2");
  printIntArr(arr2, m);
  printf("arr3");
  printFloatArr(arr3, 10);
  if (isArrDoiXuong(arr2, sizeof(arr2))) {
    cout << "arr2 la mang doi xung" << endl;
  }
  testMangTangDan();
  // so nguyen to
  testSoNguyenTo(m);
  testSoChinhPhuong(m);

  float valueCanTim = 5.6;
  if (isHaveValue(arr3, valueCanTim)) {
    cout<<"value 5.6 ton tai trong mang arr3"<<endl;
  }
  testDemSoLanXuatHienPhanTuTrongMang();
  cout << "So am trong mang arr1" << endl;
  traVeCacSoAmTrongMang(m);

  cout << "Tong cac so duong trong mang arr1 " << tongCacSoDuong(arr1,m) << endl;

  // Dao nguoc cac phan tu cua mang
  int arrDaoNguocarr1[SIZE];
  for (int i = m - 1, j = 0; i >= 0; --i,j++) {
    arrDaoNguocarr1[j] = arr1[i];
  }

  printIntArr(arrDaoNguocarr1, m);

  timCacCapPhanTuCoTongBangSoNguyenK(arr4,m,10);

  // Tim phan tu lon thu 2 trong mang
  int maxLonNhat = 0;
  int maxThuHai = 0;
  for (int i = 0; i < m; i++) {
    if (arr4[i] > maxLonNhat) {
      maxThuHai = maxLonNhat;
      maxLonNhat = arr4[i];
    } else if (arr4[i] > maxThuHai && arr4[i] != maxLonNhat) {
      maxThuHai = arr4[i];
    }
  }
  cout << "Gia tri lon thu 2 trong mang arr4 la " << maxThuHai << endl;

  // Tim phan tu nho thu 2 trong mang
  int minNhoNhat = maxLonNhat;
  int minThuHai = maxLonNhat;
  for (int i = 0; i < m; i++) {
    if (arr4[i] < minNhoNhat) {
      minThuHai = minNhoNhat;
      minNhoNhat = arr4[i];
    } else if (arr4[i] < minThuHai && arr4[i] != minNhoNhat) {
      minThuHai = arr4[i];
    }
  }

  cout << "Gia tri nho thu 2 trong mang arr4 la " << minThuHai << endl;

  // in ra cac cap phan tu co gia tri dao nguoc nhau (-1,1)
  cout << "Cac phan tu co gia tri dao nguoc nhau: " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < m; j++) {
      if (arr4[i] + arr4[j] == 0 && arr4[i] != 0) {
        cout << "(" << arr4[i] << ", " << arr4[j] << ")" << endl;
      }
    }
  }
  return 0;
}