#include <iostream>
using namespace std;

int demSoDuong(float arr[], int n)
{
    if (n == 0) {
        return 0;
    }
    else {
        int Dem = demSoDuong(arr, n - 1);
        
        if (arr[n-1] > 0) {
            Dem++;
        }
        return Dem;
    }
}

int main()
{
    float arr[] = {1.2, -5.5, 6.7, 0, 3.14, -2.5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int soDuong = demSoDuong(arr, n);

    cout << "So luong gia tri duong trong mang la: " << soDuong;

    return 0;
}

