//
// Created by Felix Ngo on 7/12/24.
//

#include <iostream>
using namespace std;

const int DONG = 12;
const int COT = 12;

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

void printArray(int arr[][COT], int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  srand(time(0));
  int arr[DONG][COT];
  int size = rand() % 9 + 4;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      arr[i][j] = rand() % (79 - (-39) + 1) - 39;
    }
  }

  printArray(arr, size);

  int maxValue = arr[0][0]; // Giả sử phần tử đầu tiên là lớn nhất
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (arr[i][j] > maxValue) {
        maxValue = arr[i][j];
      }
    }
  }

  cout << "Phần tử lớn nhất trong mảng: " << maxValue << endl;

  int demSoNguyenTo;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (isSoNguyenTo(arr[i][j])) {
        demSoNguyenTo += 1;
      }
    }
  }

  cout << "Mang co " << demSoNguyenTo << " so nguyen to" << endl;

  // In các phần tử nửa trên của đường chéo chính
  cout << "\nCac phan tu nam nua tren duong cheo chinh:" << endl;
  for (int i = 0; i < size; ++i) {
    for (int j = i; j < size; ++j) {
      cout << arr[i][j] << "\t";
    }
  }
  cout << endl;

  // In các phần tử nửa trên của đường chéo phụ
  cout << "\nCac phan tu nam nua tren duong cheo phu:" << endl;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
      cout << arr[i][j] << "\t";
    }
  }
  cout << endl;

  cout << "\nCac phan tu nam nua tren duong cheo chinh:" << endl;
  for (int i = 0; i < size; ++i) {
    for (int j = i; j < size; ++j) {
      cout << arr[i][j] << "\t";
    }
  }
  cout << endl;

  int tongPhanTuDuoiDuongCheoPhu = 0;
  for (int i = 0; i < size; ++i) {
    for (int j = size - i; j < size; ++j) { // Phần tử dưới đường chéo phụ
      tongPhanTuDuoiDuongCheoPhu += arr[i][j];
    }
  }
  cout << "\nTổng các phần tử nằm dưới đường chéo phụ: " << tongPhanTuDuoiDuongCheoPhu << endl;

  int giaTriGiaoNhau = arr[size / 2][size / 2]; // Giá trị giao đúng khi mảng có kích thước lẻ
  if (size % 2 == 1) {
    cout << "\nGiá trị giao nhau giữa đường chéo chính và đường chéo phụ là: " << giaTriGiaoNhau << endl;
  } else {
    cout << "\nKhông có giá trị nào giao nhau giữa đường chéo chính và đường chéo phụ" << endl;
  }

  //Tìm giá trị nhỏ nhất trên từng dòng
  cout << "\nGiá trị nhỏ nhất trên từng dòng:" << endl;
  for (int i = 0; i < size; ++i) {
    int minInRow = arr[i][0];
    for (int j = 1; j < size; ++j) {
      if (arr[i][j] < minInRow) {
        minInRow = arr[i][j];
      }
    }
    cout << "Dòng " << i + 1 << ": " << minInRow << endl;
  }

  // Tìm giá trị lớn nhất trên từng cột
  cout << "\nGiá trị lớn nhất trên từng cột" << endl;
  for (int j = 0; j < size; ++j) {
    int maxInColumn = arr[0][j];
    for (int i = 1; i < size; ++i) {
      if (arr[i][j] > maxInColumn) {
        maxInColumn = arr[i][j];
      }
    }
    cout << "Cot " << j + 1 << ": " << maxInColumn << endl;
  }

  // Kiểm tra mảng có toàn giá trị chẵn
  bool isArrChan = true;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (arr[i][j] % 2 != 0) {
        isArrChan = false;
        break;
      }
    }
  }
  if (isArrChan) {
    cout << "\nMảng có hoàn toàn giá trị chẵn" << endl;
  } else {
    cout << "\nMảng không có hoàn toàn giá trị chẵn" << endl;
  }

  // Tìm giá trị chẵn lớn nhất
  int maxEven = INT_MIN; // khởi tạo với giá trị mặc định là nhỏ nhất trong kiểu số nguyên
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (arr[i][j] % 2 == 0 && arr[i][j] > maxEven) {
        maxEven = arr[i][j];
      }
    }
  }
  if (maxEven == INT_MIN) {
    cout << "\nKhông có giá trị chẵn nào trong mảng." << endl;
  } else {
    cout << "\nGiá trị chẵn lớn nhất trong mảng: " << maxEven << endl;
  }

  cout << "\nCác số nguyên tố trong mảng: ";
  bool isHaveSoNguyenTo = false;
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (isSoNguyenTo(arr[i][j])) {
        cout << arr[i][j] << " ";
        isHaveSoNguyenTo = true;
      }
    }
  }
  if (!isHaveSoNguyenTo) {
    cout << "Không có số nguyên tố nào trong mảng";
  }
  cout << endl;

  return 0;
}