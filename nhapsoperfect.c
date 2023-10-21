#include <stdio.h>

int main() {
    // int targetAmount = 70000;
    
    // printf("Các phương án trả tiền %d đồng:\n", targetAmount);
    
    // for (int d0 = 0; d0 <= 10; d0++) {
    //     for (int d1 = 0; d1 <= 10; d1++) {
    //         for (int d2 = 0; d2 <= 20; d2++) {
    //             for (int d3 = 0; d3 <= 10; d3++) {
    //                 int total = d0 * 5000 + d1 * 10000 + d2 * 20000 + d3 * 50000;
    //                 if (total == targetAmount) {
    //                     printf("%d tờ 5000 đồng, %d tờ 10000 đồng, %d tờ 20000 đồng, %d tờ 50000 đồng\n", d0, d1, d2, d3);
    //                 }
    //             }
    //         }
    //     }
    // }
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);
    
    printf("Các số hoàn hảo <= %d là:\n", n);
    
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
    
    return 0;
    
    return 0;
}
