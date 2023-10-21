// Sap xep tang dan tren moi hang cua ma tran cac so thuc. in ra 1 so sau dau.

#include<stdio.h>
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>
void NhapMang2D(double a[][100], int r, int c) {
    int i,k;
    for(i=0;i<r;i++) {
        for(k=0;k<c;k++) {
            scanf("%lf", &a[i][k]);
        }
    }
}
void HienMang2D(double a[][100], int r, int c) {
    int i,k;
    for ( i = 0; i < r; i++)
    {
        for ( k = 0; k < c; k++)
        {
            printf("%.1lf\t", a[i][k]);
        }
      printf("\n");  
    } 
}
void SortRow(double a[][100], int r, int c) {
    int h,ct,cs;// h= chi so duyet hang, ct chi o cot chay truoc, cs chi so cot chay sau
    for ( h = 0; h < r; h++)
    {
        for(ct =0;ct<c-1;ct++) 
        {
            for(cs=ct+1; cs<c; cs++) 
            {
                if(a[h][ct] > a[h][cs])
                {
                    //swap
                    double tmp= a[h][ct];
                    a[h][ct] = a[h][cs];
                    a[h][cs] = tmp;
                }
            }
        }
    }
    HienMang2D(a,r,c);
}
// chinh cac dieukien if(truoc swap) nếu có thêm các yêu cầu như hàng chẵn cột chẵn/ lẻ. Phần tử chẵn/lẻ/chia het cho 3,..
// bài toán tìm kiếm, điểm yên ngựa
void YenNgua(double a[][100], int r, int c) {
    int h,cot,d; double minr, maxc; // min hang, max cot b1. duyet moi hang tim min hang--> b2. ktra gia tri min hang thoa man max cot?
    for(h=0; h<r;h++) {
        minr = a[h][0];
        for(cot =0; cot<c; cot++) {
            if(a[h][cot] < minr) {
                minr = a[h][cot];
            }
                // tim minr xong. b2. kiem tra all cac pt min/hang do cxem co thoa man la max tren cot do khong
                for(cot = 0; cot<c;cot++) {
                    if(a[h][cot] == minr) {
                        for(d=0;d<r;d++) {
                            if(a[d][cot] > a[h][cot]) {
                                break;
                            }
                            if(d>r-1) {
                                printf("vi tri (%d.%d) = %.1lf la 1 diem yen ngua",h,cot,a[h][cot]);
                            }
                        }
                    }
                }
            }
        }
    }

int main() {
    double a[20][100]; int r,c;
    scanf("%d%d", &r,&c);
    NhapMang2D(a,r,c);
    printf("\nOUTPUT:\n");
    HienMang2D(a,r,c);
    YenNgua(a,r,c);
    // printf("\nAfter Soft:\n");
    // SortRow(a,r,c);
}