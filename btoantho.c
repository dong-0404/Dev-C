#include<stdio.h>
#include<math.h>

int main() {
    // int n, i, f1=1, f2=1;
    // scanf("%d", &n);
    // for(i = 3; i<=n; i++) {
    //     int tmp = f2;
    //     f2 = f1+f2;
    //     f1 = tmp;
    // };
    // printf("%d", f2);
    // return 0;

    // tim so nguyen to
    int n,i;
    scanf("%d",&n);
    for(i=2; i<=n; i++) {
        int k, dem=0;
        for(k=1; k<=i; k++)
        if(i%k == 0) {
            dem++;
        }
        if(dem==2) {
            printf("%d", i);
        }
    }
    return 0;
}