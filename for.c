#include<stdio.h>
#include<math.h>

int main() {
    // int n, i;
    // scanf("%d", &n);
    // int sum =0;
    // for(i = 0; i<=n; i++) {
    //     if(i % 2 ==1) {
    //         sum +=i;
    //     }; 
    // }
    //  printf("%d", sum);
    // return 0;

    // lay x mu y -> pow(x,y);
    // lay can 2 sqrt(x);
    // tri tuyet doi -> abs(x) fabs(x);

    int n,i,gti=1;
    double x, sum=0;
     scanf("%lf %d", &x,&n);

     for(i=1; i<=n; i++) {
        gti = gti * i;
        sum+= pow(-1,i)*pow(x,i)/gti;
     }
     printf("%.2lf", sum);

     return 0;
}