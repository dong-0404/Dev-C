#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrimeNumber(int n) {
    if (n <= 1) {
        return 0; // 0 và 1 không phải là số nguyên tố
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Hàm tìm phần tử lớn nhất trong mảng
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Hàm chèn các số nguyên tố đầu tiên vào sau số lớn nhất
void insertFirstPrimeNumbers(int arr[], int *n) {
    // Tìm phần tử lớn nhất
    int max = findMax(arr, *n);

    // Duyệt mảng để tìm số nguyên tố đầu tiên và chèn vào sau số lớn nhất
    for (int i = 0; i < *n; i++) {
        if (isPrimeNumber(arr[i])) {
            // Tìm vị trí của số lớn nhất trong mảng
            int maxIndex = -1;
            for (int j = 0; j < *n; j++) {
                if (arr[j] == max) {
                    maxIndex = j;
                    // printf("%d\n", maxIndex);
                    break;
                }
            }

            // Dời tất cả các phần tử từ maxIndex+1 đến *n sang phải để tạo chỗ trống
            for (int j = *n; j > maxIndex + 1; j--) {
                arr[j] = arr[j - 1];
                // printf("%d \n", arr[i]);
                // break;
            }

            // Chèn số nguyên tố vào sau số lớn nhất
            arr[maxIndex + 1] = arr[i];
            (*n)++; // Tăng kích thước mảng
            break; // Dừng sau khi đã chèn số nguyên tố đầu tiên
        }
    }
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[100]; // Giả sử mảng có tối đa 100 phần tử

    // Nhập các phần tử cho mảng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Chèn số nguyên tố đầu tiên vào sau số lớn nhất
    insertFirstPrimeNumbers(arr, &n);

    // In ra mảng sau khi đã chèn số nguyên tố
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
