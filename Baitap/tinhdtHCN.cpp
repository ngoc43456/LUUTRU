#include<stdio.h>
#include<conio.h>
int tinhdtHCN;
main()
{
    float a,b,s;
    printf("\n Nhap chieu rong canh a: ");
    scanf("%f",&a);
    printf("\n Nhap chieu dai canh b: ");
    scanf("%f",&b);
    if((a>0)&&(b>0)){
        s=a*b;
         s=(a+b)*2;
        printf("\n >Dien tich la: %.1f",s);
    }
    else{
        printf("\n >Hinh chu nhat khong dung");    
    }
}
