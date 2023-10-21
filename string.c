#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>//nhap vao 2 ky tu in ra dang nhi phan cb AB=0100000101000010
void  toBinary(char c){// cach 1 dung phep &
	if (c& 0x80) printf("1");else printf("0");
	if (c& 0x40) printf("1");else printf("0");
	if (c& 0x20) printf("1");else printf("0");
	if (c& 0x10) printf("1");else printf("0");
	if (c& 0x08) printf("1");else printf("0");
	if (c& 0x04) printf("1");else printf("0");
	if (c& 0x02) printf("1");else printf("0");
	if (c& 0x01) printf("1");else printf("0");
}// cach 2 dung cach chia 
void toBinaryDiv(int c){
	int b[100]={0},n=0,i;// n la so bit sau khi chuyen
	while (c>0){
		b[n]=c%2; n++;//gan so du vao mang b o vi tri n roi tang m
		c=c/2;
	}//chia xong thi hien ra
	for(i=7;i>=0;i--)// neu so int 16 bit thi khoi dung i=15,..... 31
		printf("%d",b[i]);
}
void PrintStrAsbinary (char s[]){
	int i;
	for (i=0;i<strlen(s);i++)
		toBinaryDiv(s[i]);
}


int main() {
//   system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[5];gets(s);


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	PrintStrAsbinary(s);


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
//   system ("pause");
  return(0);
}