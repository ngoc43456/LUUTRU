#include<stdio.h>
int main()
{
	int x, y;
	printf("\n Nhap gia tri x: ");
	scanf("%d",&x);
	printf("\n Nhap gia tri y: ");
	scanf("%d",&y);
	if(x>y)
	printf("\n Gia tri max la %d",x);
	else
	printf("\n Gia tri cua max la %d",y);
	return 0;
}
