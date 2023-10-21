#include <stdio.h>

void NhapMang2D(int a[][50], int r, int c)
{
    int i, k;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            scanf("%d", &a[i][k]);
        }
    }
}
int isPrime(int x)
{
    int i, dem = 0;
    if (x < 2)
    {
        return 0;
    }
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            dem++;
        }
    }
    if (dem == 2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

void HienMang2D(int a[][50], int r, int c)
{
    int i, k;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            printf("%d\t", a[i][k]);
        }
        printf("\n");
    }
}
void findPrime(int a[][50], int r, int c)
{
    int i, k;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            if (isPrime(a[i][k]) == 1)
            {
                printf("%d ", a[i][k]);
            }
        }
    }
}

int main()
{
    int a[50][50], r, c;
    scanf("%d%d", &r, &c);
    NhapMang2D(a, r, c);

    printf("\nOUTPUT:\n");
    findPrime(a, r, c);

    return 0;
}