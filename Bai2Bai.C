#include <stdio.h>

// Hàm kiểm tra số hoàn hảo
int isPerfect(int num) {
  int sum = 0,i;
  for(i=1; i<num; i++) {
    if(num%i == 0) {
      sum += i;
    }
  }
  return (sum == num);
}

// Hàm sắp xếp mảng tăng dần 
void sortArray(int arr[], int n) {
    int i,j;
  for(i=0; i<n-1; i++) {
    for(j=i+1; j<n; j++) {
      if(arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// Hàm main
int main() {
  int n,i;
  scanf("%d", &n);

  int a[n];
  for(i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }

  int perfectNum[n]; 
  int k = 0;

  for(i=0; i<n; i++) {
    if(isPerfect(a[i])) {
      perfectNum[k++] = a[i];
    }
  }

  sortArray(perfectNum, k);

  for(i=0; i<k; i++) {
    printf("%d ", perfectNum[i]);
  }

  return 0;
}