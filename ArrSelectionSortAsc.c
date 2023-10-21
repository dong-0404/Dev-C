#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu

void NhapMangF(float a[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
}
int XoaPhanTu(float a[], int *n, float x) {
    int found = 0;

    int i,j;
    for (i = 0; i < *n; i++) {
        if (a[i] == x) {
            found = 1;
            for (j = i; j < (*n - 1); j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
            break;
        }
    }
    for (i = (*n - 1); i >= 0; i--) {
        if (a[i] == x) {
            found = 1;
            for (j = i; j < (*n - 1); j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
            break;
        }
    }

    return found;
}

int main() {
//   system("cls");   // lenh cls trong dos xoa man hinh
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n,i;
    scanf("%d", &n);

    if (n < 5 || n > 50) {
        return 1;
    }

    float a[50];
    NhapMangF(a, n);
    float x;
    scanf("%f", &x);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


    int found = XoaPhanTu(a, &n, x);

    if (!found) {
        printf("-1\n");
    } else {
        for (i = 0; i < n; i++) {
            printf("%.0f ", a[i]);
        }
    }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}