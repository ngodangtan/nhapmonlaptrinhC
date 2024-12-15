#include <iostream>
using namespace std;

/* Họ tên: Ngô Đăng Tân
Mã SV: 24210173
Đề chẵn
 */
const int SIZE = 50;
const int DONG = 5;
const int COT = 6;

// BÀI 1
/* Câu 1. Viết hàm tính giá trị biểu thức F(n) = 1 + (1+2) + (1+2+3) + (1+2+3+...+n)
Input:
+ int n
Output:
+ kết quả biểu thức => return int
 */

int sumBieuThuc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int result = i * (i + 1) / 2;
        sum += result;
    }
    return sum;
}

/* Câu 2. Viết hàm kiểm tra n là số chẵn hay số lẽ
Input:
+ int n
Output:
+ số chẵn => return true
+ số lẽ => return false
 */

bool checkSoChan(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// BÀI 2
/* Câu 1. Viết in tất cả phần tử trong mảng 1 chiều
Input:
+ array float a[], int n
 */

void printArr1D(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

/* Câu 2. Viết tính tích các số âm và tìm số dương nhỏ nhất
Input:
+ array float a[], int n
Output:
+ tich so am return => float
 */

float tichSoAmMang1D(float a[], int n, float &giaTriDuongMin) {
    float ketqua = 1;
    giaTriDuongMin = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            ketqua *= a[i];
        } else {
            if (a[i] < giaTriDuongMin) {
                giaTriDuongMin = a[i];
            }
        }
    }
    return ketqua;
}

/* Câu 3. Viết hàm tính giá trị trung bình phần tử lẻ trong mảng
Input:
+ array float a[], int n
Output:
+ gia trị trung bình => return float
 */

float giaTriTrungBinhPhanTuLeTrongMang(float a[], int n) {
    double sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int integerPart = (int) a[i];
        if (integerPart % 2 != 0) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) {
        return 0; // Tránh chia cho 0
    }

    return sum / count; // Tính giá trị trung bình
}

//BÀI 3
/* Câu 1. Viết in tất cả phần tử trong mảng 2 chiều
Input:
+ array float a[][], int n
 */
void printArray2D(float a[][COT], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            cout << a[i][j] << "    ";
        }
        cout << endl;
    }
}

/* Câu 2. Viết hàm tìm giá trị chẵn nhỏ nhát
Input:
+ array float a[][], int n
Output:
+ gia trị dương nhỏ nhất => return float
 */

float giaSoChanMin2D(float a[][COT], int dong, int cot) {
    float minChan = -1;
    bool isTimThay = false;

    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            int integerPart = (int) a[i][j];
            if (integerPart % 2 == 0) {
                if (!isTimThay || a[i][j] < minChan) {
                    minChan = a[i][j];
                    isTimThay = true;
                }
            }
        }
    }

    return minChan;
}

//BÀI 4
struct ToaDo {
    float x;
    float y;
};

/* Câu 1. Viết hàm in Toa Do
Input:
+ list ToaDo a
 */
void printToaDo(ToaDo a){
    cout << "(" << a.x << "; " << a.y << ")" << endl;
}

void printArrToaDo(ToaDo arr[], int n){
    for(int i = 0; i < n; i++){
        printToaDo(arr[i]);
    }
}

/* Câu 2. Viết hàm tìm toạ độ gần tâm O nhất từ các mảng toạ độ
Input:
+ list ToaDo a
Output
+ Toa do gan tam O nhat => return ToaDo
 */

ToaDo timToaDoGanTamNhat(ToaDo arr[], int n) {
    ToaDo nearest = arr[0];
    float minKhoangCach = sqrt(arr[0].x * arr[0].x + arr[0].y * arr[0].y);

    for (int i = 1; i < n; i++) {
        float khoangCach = sqrt(arr[i].x * arr[i].x + arr[i].y * arr[i].y);
        if (khoangCach < minKhoangCach) {
            minKhoangCach = khoangCach;
            nearest = arr[i];
        }
    }

    return nearest;
}

int main() {
    cout << "==== BÀI 1 ====" << endl;
    cout << "Test: Câu 1." << endl;
    cout << "\tF(3) = " << sumBieuThuc(3) << endl;
    cout << "\tS(8) = " << sumBieuThuc(8) << endl;
    cout << "\tS(20) = " << sumBieuThuc(20) << endl;

    cout << "Test: Gọi hàm câu 2" << endl;
    cout << "\tKiem tra 15 (0): " << checkSoChan(15) << endl;
    cout << "\tKiem tra 29 (0): " << checkSoChan(29) << endl;
    cout << "\tKiem tra 1234 (1): " << checkSoChan(1234) << endl;

    cout << "\tKiem tra 80 (1): " << checkSoChan(80) << endl;
    cout << "\tKiem tra -98 (1): " << checkSoChan(-98) << endl;
    cout << "\tKiem tra 101 (0): " << checkSoChan(101) << endl;

    cout << "==== BÀI 2 ====" << endl;
    cout << "Test: Câu 1. In mảng" << endl;
    float a[SIZE] = {16.2, 99.4, -51.6, 98.5, -79.6, 68.3, -34.8, 91.6, -97.4, 40.8};
    int slA = 10;
    printArr1D(a, slA);

    cout << "Test: Câu 2" << endl;
    float giaTriDuongMin = 0;
    float ketQuaBai2Cau2 = tichSoAmMang1D(a, slA, giaTriDuongMin);
    cout << "\tTich Cac So Am: " << ketQuaBai2Cau2 << endl;
    cout << "\tGia tri duong nho nhat: " << giaTriDuongMin << endl;

    cout << "Test: Câu 3" << endl;
    cout << "\tGia tri trung binh cac phan tu le trong mang: " << giaTriTrungBinhPhanTuLeTrongMang(a, slA) << endl;

    cout << "==== BÀI 3 ====" << endl;
    cout << "Test: Câu 1. In mang" << endl;
    float arr2D[5][6] = {
        {9.9, 4.4, 8.9, 2.6, 6.3, 6.3},
        {5.5, 5.8, 3.5, 1.5, 9.4, 9.4},
        {1.4, 4.5, 7.3, 8.7, 7.4, 7.4},
        {6.9, 3.4, 1.1, 9.8, 6.9, 6.9},
        {5.0, 2.2, 5.3, 7.7, 1.9, 1.9}
    };
    printArray2D(arr2D, DONG, COT);
    cout << "Test: Câu 2. Gia Tri Chan Nho Nhat" << endl;
    cout << "\tKet qua: " << giaSoChanMin2D(arr2D, DONG, COT) << endl;

    cout << "==== BÀI 4 ====" << endl;
    cout << "Test: Câu 1. In ToaDo" << endl;
    ToaDo listToaDo[50] = {{1.5,2.4}, {7,5}, {3,5}, {2.4,1.5}};
    int slToaDo = 4;
    printArrToaDo(listToaDo, slToaDo);

    cout << "Test: Câu 2" << endl;
    ToaDo toaDoKq = timToaDoGanTamNhat(listToaDo, slToaDo);
    printToaDo(toaDoKq);
}
