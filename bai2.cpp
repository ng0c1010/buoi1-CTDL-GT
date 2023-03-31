#include <iostream>
#include <math.h>
using namespace std;

double tinhGiaiThua(int n) {
    if(n == 0) {
        return 1;
    }
    return n * tinhGiaiThua(n - 1);
}

double tinhTong(double x, int n) {
    if(n == 0) {
        return 1;
    }
    return tinhTong(x, n - 1) + pow(x, n) / tinhGiaiThua(n);
}

int main() {
    double x = 10;
    int n = 10;
    double ketQua = tinhTong(x, n);
    cout << "Tong cua bieu thuc S(" << x << ", " << n << ") la: " << ketQua << endl;
    return 0;
}

