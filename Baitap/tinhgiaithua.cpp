8#include<stdio.h>
long tinhGiaithua(int n) {
   int i,giai_thua = 1;
   if (n==0)
    {
       return giai_thua;  
    }
	 else 
   {
       for (i=2;i<=n;i++) 
	   {
           giai_thua *= i;
       }
       return giai_thua;
   }
}
int main()
 {
 	int a,b,c;
   printf(" Nhap giai thua a: ");
	scanf("%d",&a);
	printf(" Giai thua cua a la: %d",a);
	
	printf("\n\n Nhap giai thu b: ");
	scanf("%d",&b);
	printf(" Giai thua cua b la: %d",b);
	
	printf("\n\n Nhap giai thua c: ");
	scanf("%d",&c);
	printf(" Giai thua cua c la: %d",c);
	
   printf("\n\n Giai thua cua %d  la: %d ", a, tinhGiaithua(a));
   printf("\n Giai thua cua %d  la: %d ", b, tinhGiaithua(b));
   printf("\n Giai thua cua %d  la: %d", c, tinhGiaithua(c));

}
