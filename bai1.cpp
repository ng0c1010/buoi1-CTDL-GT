#include <iostream>
using namespace std;

int TongChan(int arr[], int size) {
    if(size == 0) {
        return 0;
    }
    int lastNum = arr[size - 1];
    int Tong = TongChan(arr, size - 1);
    if(lastNum % 2 == 0) {
        Tong += lastNum;
    }
    return Tong;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int kq = TongChan(arr, size);
    cout << "Tong cac so chan trong mang la:  " << kq << endl;
    return 0;
}

