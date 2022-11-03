#include<stdio.h>
int timUSCLN(int a,int b) 
{
    if (b==0) return a;
    return timUSCLN(b,a%b);
}
int main() {
 int a, b;
    printf(" Nhap so nguyen duong a: ");
    scanf("%d", &a);
    printf(" Nhap so nguyen duong b: ");
    scanf("%d", &b);
    printf(" USCLN cua %d va %d la: %d", a, b, timUSCLN(a, b));

}
