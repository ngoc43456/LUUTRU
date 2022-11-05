#include<stdio.h>
void Nhapmang1c(int a[50],int n);
void Xuatmang1c(int a[50],int n);
void max(int a[50],int n);
void Tich(int a[50],int n);
void demtinhtong(int a[50],int n);
/*void NhapX(int a[50],int *n,int x);*/
int main()
{
	int a[50],n;
	printf("Nhap n: ");
	scanf("%d",&n);
	while(n>50)
	{
		printf("\n Nhap lai n: ");
		scanf("%d",&n);
	}
	Nhapmang1c(a,n);
	Xuatmang1c(a,n);
	max(a,n);
	Tich(a,n);
	demtinhtong(a,n);
/*	NhapX(a,n,x);*/
}

 void Nhapmang1c(int a[50],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Nhap gia tri cua phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void Xuatmang1c(int a[50],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Gia tri cua phan tu a[%d]=%d",i,a[i]);
	}
}

void max(int a[50],int n)
{
	int i,j,gtln=0;
	for(int i=0;i<n;i++)
	{
		if(gtln<=a[i])gtln=a[i];
		if(gtln<=a[i])j=i;
	}
	printf("\n Gia tri lon nhat la %d cua phan tu la a[%d]",gtln,j);
}

void Tich(int a[50],int n)
{
	long tich=1;
	for(int i=0;i<n;i++)
	{
		tich=tich*a[i];
	}
	printf("\n Tich cua phan tu la: %d",tich);
}

void demtinhtong(int a[50],int n)
{
	int i,j,dem=0;
	int tong=0;
	int demngto=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		demngto++;
		if(a[j]==1)
		tong=tong+a[i];
	}
	printf("\n Co %d phan tu la so nguyen to",demngto);
	printf("\n Tong phan tu nguyen to la %d",tong);
}

/*void NhapX(int a[50];int *n,int x)
{
	printf("\n Nhap x: ");
	for(int i=0;i<*n;i++)
	{
		x[i]=x[i+1];
	}
	*n--
}*/
