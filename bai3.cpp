#include <iostream>
using namespace std;

int tinhX(int n);

int tinhY(int n) {
    if(n == 0) {
        return 0;
    }
    return 3 * tinhX(n - 1) + 2 * tinhY(n - 1);
}

int tinhX(int n) {
    if(n == 0) {
        return 1;
    }
    return tinhX(n - 1) + tinhY(n - 1);
}

int main() {
    int n = 10;
    int x = tinhX(n);
    int y = tinhY(n);
    cout << "X(" << n << ") = " << x << endl;
    cout << "Y(" << n << ") = " << y << endl;
    return 0;
}

