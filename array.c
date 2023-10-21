#include <stdio.h>

int main() {
    int n,m;
    int a[100][100];
    scanf("%d%d", &n,&m);
    // printf("%d%d", n, m);

    printf("Nhap mang: \n");
    for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
      printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    } 

    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) { 
            if(a[i][j] % 5 == 0) {
                // printf("%d", a[i][j]);
                sum +=a[i][j];
            }
        }
    }
    printf("Tong bang = %d", sum);
    return 0;
}