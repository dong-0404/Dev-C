#include <stdio.h>

int main()
{
    //  Vẽ Tam giác vuông có vẽ cả khoảng trống
    // int a;
    // scanf("%d", &a);
    // for(int i = 1; i<= a; i++) {
    //     for(int k = 1;k<i; k ++) {
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= a-i+1; j ++) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }
    // Vẽ tam giác vuông thường
    //     int n=6,i,j;

    //    for(i = 1; i <= n; i++) {
    //       for(j = 1; j <= i; j++)
    //          printf("* ");

    //       printf("\n");
    //    }

    // Vẽ tam giác đều
    int n =6,i,j;
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j<= n-i; j++) {
            printf(" ");
        }
        for(j = 1; j<= i; j++){
            if(i==1 && j==1) {
                printt("1");
            }
            printf("* ");
        }
        printf("\n");
    }
    // Vẽ tam giác đều ngược
    // int n=6,i,j;
    // for(i = 1; i <= n; i++) {
    //     for(j = 1; j < i; j++) {
    //         printf(" ");
    //     }
    //     for(j = i;j <= n; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // vẽ tam giác cân ngược

    // int n, i, k, c;
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {
    //     for (c = 1; c < i; c++)
    //     {
    //         printf(" ");
    //     }
    //     for (k = 1; k <= n - i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // Vẽ hình vuông
    // int n;
    // printf("Nhap do dai canh: ");
    // scanf("%d", &n);
    // int i, j;
    // for(i = 1; i<=n; i++){
    //     for(j = 1; j<=n; j++){
    //      //Nếu nằm trên đường viền thì ta in ra ký tự *
    //         if(i == 1 || j==1 || i == n || j == n || j == n-i+1 || j == i){
    //             printf("* ");
    //         }//Ngược lại ta in ra ký tự khoảng trắng
    //        else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    
    return 0;
}