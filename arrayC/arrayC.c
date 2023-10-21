#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

void NhapMangI(int a[], int n) {
    int i;
    for(i=0;i<=n;i++) {
        scanf("%d", &a[i]);
    }
}
void NhapMangR(double a[], int n) {
    int i;
    for(i=0;i<=n;i++) {
        scanf("%lf", &a[i]);
    }
}
int TimMax(int a[], int n) {
    int i, max=a[0];
    for(i=0; i<=n;i++) {
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}
void HienMangI(int a[], int n) {
    int i;
    for(i=0;i<=n;i++) {
        printf("%d", a[i]);
    }
}
void HienMangR(double a[], int n) {
    int i;
    for(i=0;i<=n;i++) {
        printf("%.2lf", a[i]);
    }
}

int main() {
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int x[10], n;
  scanf("%d", &n);
  NhapMangI(x,n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("Max=%d", TimMax(x,n));
//   HienMangI(x,n);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}