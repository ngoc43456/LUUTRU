#include<stdio.h>
int main()
{
    int i, n;
    printf("\n Nhap n: ");
    scanf("%d", &n);
    if(n<2)
        printf("\n So %d khong phai la so nguyen to", n);
    else if(n==2)
        printf("\n So %d la so nguyen to", n);
    else if(n%2==0)
        printf("\n So %d khong phai la so nguyen to", n);
}
