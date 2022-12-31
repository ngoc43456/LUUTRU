#include<stdio.h>
void Nhapmang2c(int a[100][100], int m, int n);
void Xuatmang2c(int a[100][100], int m, int n);
void Sapxep(int a[100][100], int m, int n);
void Tinhtong(int a[100][100], int m, int n);

int main()
{
	int n, key;
	SINHVIEN x, a[100];
	while(true)
	{
		 system("cls");
		 printf("*************************************************\n");
		 printf("**           CHUONG TRINH QUAN LY SV           **\n");
	     printf("**           1.Nhap DS Sinh Vien               **\n");
		 printf("**           2.Sap xep theo KQCK               **\n");
		 printf("**           0.Thoat                           **\n");
         printf("*************************************************\n");
	printf("\n       \t\t AN PHIM DE CHON :     ");
	scanf("%d",&key);
	switch(key)
	{
		  case 1:
		  	do
		  	{
			  printf("\n\n\nNhap so luong sinh vien :");
	          scanf("%d",&n);
			}while(n<=0);
		    NhapsvN(a,n);
		    printf("\nBam phim bat ky de tiep tuc !");
		    getch();
		    break;
		  case 2:
		  	printf("\nBam phim bat ky de tiep tuc !");
		  	Sapxep(a,n);
		  	XuatsvN(a,n);
		  	getch();
		    break;
		  case 0:
		  	exit(1);
		  default:
		  	printf("\nKhong co chuc nang nay !");
		  	printf("\nBam phim bat ky de tiep tuc !");
		  	getch();
		  	break;
		  	
	}
	}
}


{
	int a[100][100],m,n;
	{
		printf(" Nhap so nguyen m dong: ");
		scanf("%d",&m);
		printf("\n Nhap so nguyen n cot: ");
		scanf("%d",&n);
	} 
	Nhapmang2c(a,m,n);
	Xuatmang2c(a,m,n);
	Sapxep(a,m,n);
	Tinhtong(a,m,n);
}

void Nhapmang2c(int a[100][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n Nhap a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void Xuatmang2c(int a[100][100], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("  %d  ",a[i][j]);
		}
	     	printf("\n\n");
	}       
}

void Sapxep(int a[100][100], int m, int n)
{
	int k=m*n;
	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(a[i/n][i%n]>a[j/n][j%n])
			{
				int temp=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][i%n];
				a[j/n][j%n]=temp;
			}
			printf("\n Sap xep gia tri mang tang dan la: ");
		}
	}
}

void Tinhtong(int a[100][100], int m, int n)
{
	int Tong=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]%3==0)
			{
				Tong=Tong+a[i][j];
				Tonng++;
			}
		}
	} 
}
