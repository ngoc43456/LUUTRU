#include<stdio.h>
void nhapmang1c(int a[10],int n);
void xuatmang1c(int a[10],int n);
void tongmang1c(int a[10],int n);
	int main()
	{
		int a[10], n;
		printf("\n Nhap gia tri cua mang: ");
		scanf("%d",&n);
		nhapmang1c(a,n);
		xuatmang1c(a,n);
		tongmang1c(a,n);
	     return 0;
	}
	void nhapmang1c(int a[10],int n)
	{
		for(int i=0;i<n;i++)
		{
		printf("\n Nhap phan tu a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang1c(int a[10],int n)
{
	printf("\n Cac phan tu cua mang:");
	for(int j=0;j<n;j++)
	printf("%d ; ",a[j]);
}
void tongmang1c(int a[10],int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	
	printf("\n\n tong mang la %d",tong);
}
