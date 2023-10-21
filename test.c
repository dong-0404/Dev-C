#include <stdio.h>
#include <stdlib.h>

void NhapMangI(int a[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void Find(int a[], int n) {
    int maxCount = 0;
    
   
    int mostFrequent[20]; 
    int count = 0,i,j;

    for (i = 0; i < n; i++) {
        int current = a[i];
        int currentCount = 1;

        for (j = i + 1; j < n; j++) {
            if (current == a[j]) {
                currentCount++;
            }
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            count = 1; 
            mostFrequent[0] = current; 
        } else if (currentCount == maxCount) {
            mostFrequent[count] = current; 
            count++;
        }
    }

  
    for (i = 0; i < count; i++) {
        printf("%d ", mostFrequent[i]);
    }
}

int main() {
    // system("cls");
    int n;

    do {
        
        scanf("%d", &n);
    } while (n < 5 || n > 20);

    int a[20];


    NhapMangI(a, n);

    printf("\nOUTPUT:\n");
    Find(a, n);

    printf("\n");
    system("pause");
    return 0;
}