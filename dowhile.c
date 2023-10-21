#include<stdio.h>
#include<math.h>
// in ra cac so amstrong
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<=n;i++) {
        int m = i, mu=0;
        while(m>0) {
            mu++; m=m/10;
        }
        m=i; int sum=0;
        while(m > 0) {
            int du =m%10;
            sum+= pow(du, mu);
            m = m/10;
        }
        if(sum==i) {
            printf("%d ", i);
        }
    }
    return 0;
}