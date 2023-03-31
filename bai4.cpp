#include <iostream>
using namespace std;

int tinhSoHangThuN(int n) {
    if(n == 0) {
        return 1;
    }
    int tong = 0;
    for(int i = 0; i < n; i++) {
        tong += (n - i) * (n - i) * tinhSoHangThuN(i);
    }
    return tong + 1;
}

int main() {
    int n = 10;
    int x = tinhSoHangThuN(n);
    cout << "X(" << n << ") = " << x << endl;
    return 0;
}

