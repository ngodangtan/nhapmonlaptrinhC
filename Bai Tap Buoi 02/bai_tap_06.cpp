#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a, b, c, delta, x; 
    // Nhap he so a,b,c
    cout << "Nhap he so a, b, c theo thu tu: ";
    delta = b*b - 4*a*c;
    if(delta > 0) {
        double x1, x2;
        // phuong trinh co 2 nghiem phan biet
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "Phuong trinh co hai nghiem phan biet:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta ==0) {
        // phuong trinh co nghiem kep
        x = -b/2*a;
        cout << "x =" << x << endl;
     } else {
        // phuong trinh co 2 nghiem phuc
        double phanThuc = -b / (2*a);
        double phanAo = sqrt(-delta) / (2*a);
        cout << "Phuong trinh co hai nghiem phuc:" << endl;
        cout << "x1 = " << phanThuc << " + " << phanAo << "i" << endl;
        cout << "x2 = " << phanThuc << " - " << phanAo << "i" << endl;
    }
    
    return 0;
}