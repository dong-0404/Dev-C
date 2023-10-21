#include<stdio.h> // thao tac include cac thu vien chua ham input output va cu phap
#include<stdlib.h> // lam viec voi cac ham bo nho, random....
#include<string.h> // lam viec voi cac ham ve chuoi ky tu strlen
#include<math.h> // lam viec voi cac ham toan sin, ocs abs ..pow
#include<ctype.h> // lam viec voi cac ham ky tu

int main() {
    int a[100], n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 !=0 && a[i] > 0){
            sum += a[i];
        } 
    }
    // system("cls"); // lenh cls trong dos xoa man hinh
    /*
    quy tac ve dat ten : ten chuong trinh + duong dan: bat dau = ky tu hoac _. tiep theo co the la ky tu so,.. khong dung tieng viet, dau cach.
    NenVietHoa cac tu dau
    Do dai <=31 ky tu
    duoi file.c (mac dinh la)
    */
   printf("\nOUTPUT:\n");
//    printf("a>5 && a<10 ?= %d", a>5 && a<10);
printf("%d", sum);


    return 0;
}