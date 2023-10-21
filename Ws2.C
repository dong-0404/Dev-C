#include <stdio.h> // thao tac include cac thu vien chua ham input output & cu phap
#include <stdlib.h>	// lam viec voi cac ham bo nho, random...
#include <string.h> //lam viec voi cac ham ve chuoi ky tu strlen
#include <math.h>	//lam viec voi cac ham toan sin, cos, abs...pow,
#include <ctype.h>	//lam viec voi cac ham ky tu


int main() {
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
		int x;
		double kq=0;
		scanf("%d", &x);
	    scanf("%d", &n);
	    int i,j; 
	for (i=1; i<=n; i++){
		int tich=1;
			for (j=1; j<=i; j++){
				tich*=j;
			}
			kq+=(double)pow(-1,i)*(pow(x, i)/tich);
		}
  
  printf("\nOUTPUT:\n");
  
  printf("%.4lf", kq);
  
  printf("\n");
  system ("pause"); // dung man hinh
  return(0);		// quay ve
}