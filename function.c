#include<stdio.h>
#include<math.h>
#include <ctype.h>

// int checkPower(int n) {
//     int i;
//     for ( i = 0; pow(2, i)<=n; i++)
//     {
//         if(pow(2,i) == n){ return i;}
//         else{ // Neu la power cua 2 thi tra ve 1
//         return 0;
//         } // chay het for ma chua return thi se return 0
//     };
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     if(checkPower(n)==0) {
//         printf("%d is not power of 2", n);
//     } else {
//         printf("%d equal %d power of 2", n,checkPower(n));
//     }

//     return 0;
// }

// kiem tra so amstrong

/*
    1. Đếm số lượng chữ số
    2. Tính tổng các lũy thừa: cơ số là các chữ số, số mũ là số lượng chữ số
    3. So sánh và kết luận
 */

// Đếm số lượng chữ số của số n
/*
    1023
    1. 102
    2. 10
    3. 1
    4. 0
    => Có 4 chữ số
 */
// int timSoMu(int n)
// {
//      int mu=0;
//         while(n>0) {
//             mu++; n=n/10;
//         }
//         return mu;
// }

// int CheckAmstrong(int m)
// {
//     int sum =0, mu, tmp = m;
//     mu = timSoMu(m);
//     while(m>0) {
//         int du = m%10; sum+=pow(du,mu);
//         m=m/10;
//     }
//     if(sum==tmp) return 1; else return 0;
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (CheckAmstrong(n) == 1)
//     {
//         printf("\n%d is a Amstrong number", n);
//     }else{
//         printf("\n%d is not a Amstrong number", n);
//     }
//     return 0;
// }

int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Không phải số nguyên tố
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

void Primeab(int a, int b) {
    // in ra 2 so nguyen to cuoi cung
    int Prime1 = 0, Prime2 = 0;   

    for (int i = b; i >= a; i--) {
        if (isPrime(i)) {
            if (Prime1 == 0) {
                Prime1 = i;
            } else {
                Prime2 = i;
                break;
            }
        }
    }
    if (Prime1 != 0 && Prime2 != 0) {
        printf("%d , %d\n", Prime1, Prime2);
    } else {
        printf("Không tìm thấy hai số nguyên tố cuối cùng trong khoảng từ %d đến %d\n", a, b);
    }
}
int main() {
    int a,b;
    scanf("%d%d", &a,&b);
     Primeab(a, b);
}
