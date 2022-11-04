#include <stdio.h>

void Nhap (int a[50][50], int m, int n);
void Xuat (int a[50][50],int m, int n);
void max  (int a[50][50],int m,int n);
void min  (int a[50][50],int m,int n);
int dem (int n);
void NT (int a[50][50],int m,int n);
void timX (int a[50][50],int m, int n);
void Yenngua (int a[50][50],int m, int n);
void Sapxep (int a[50][50],int m,int n);
int main()
{
	int a[50][50];
	int m,n;
    printf(" Nhap so dong: "); 
	scanf("%d",&m);
    while (m<0||m>50)
    {
    	printf("\n Nhap lai:"); 
		scanf("%d",&m);
    }
    printf("\n Nhap so cot: ");
	scanf("%d",&n);
    while (n<0||n>50)
    {
    	printf("\n Nhap lai:");
		scanf("%d",&n);
    }
    
    Nhap(a,m,n);
    Xuat(a,m,n);
    max(a,m,n);
    min(a,m,n);
    NT(a,m,n);
    timX(a,m,n);
    Yenngua(a,m,n);
    Sapxep(a,m,n);
}


void Nhap (int a[50][50], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("\n Nhap a[%d][%d]=",i,j); 
		   scanf("%d",&a[i][j]);
		}
	 }
}


void Xuat (int a[50][50], int m, int n)
{
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   printf("   %d   ",a[i][j]);
		   
		}
		printf("\n\n");
	 }
}


void max (int a[50][50],int m,int n)
{
    int tam=0,x,y;
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]>=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\n Phan tu lon nhat trong mang a la a[%d][%d]: %d \n",x,y,a[x][y]);
}


void min (int a[50][50],int m,int n)
{
    int tam,x,y;
    tam=a[0][0];
    for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
	       if (a[i][j]<=tam) 
	       {
		   tam = a[i][j];
		   x=i;
		   y=j;
		   }
		}
	}
	printf("\n Phan tu nho nhat trong mang a la a[%d][%d]: %d \n",x,y,a[x][y]);
}


int dem(int n)
{
	int dem=0;
    for(int i=1;i<=n;i++)
    {
	   if (n%i==0) 
	   dem++;
	}
	return dem;
}


void NT (int a[50][50],int m,int n)
{
     int x=0,tong=0;
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if(dem(a[i][j])==2) 
		   {
		     printf("\n Gia tri %d cua phan tu a[%d][%d] la so nguyen to",a[i][j],i,j);
		     tong=tong+a[i][j];
		     x++;
		   }
		}
	 }
	 if (x==0)
	  printf("\n Khong co gia tri nao trong ma tran a la so nguyen to");
	 else   
	  printf("\n Vay co %d gia tri trong mang a la so nguyen to va tong cua chung bang: %d",x,tong);  
}



void timX (int a[50][50],int m, int n)
{
     int x,y=0;
     printf("\n\n Nhap gia tri cho X="); 
	 scanf("%d",&x);
     for(int i=0;i<m;i++)
     {
	    for(int j=0;j<n;j++)
	    {
		   if (a[i][j] == x) 
		   {
		      printf("\n\n Gia tri X xuat hien tren ma tran tai vi tri a[%d][%d]",i,j);
		      y++;
		   }
		}
	 }
	 if (y==0) printf ("\n\n Gia tri cua X khong xuat hien trong ma tran a!");
}


void Yenngua (int a[50][50],int m, int n)
{
	 int x,y,max;
	 int dem=0,demm=0;
     for (int k=0;k<m;k++)
     {
     	max=a[k][0];
	    for(int i=0;i<n;i++)
        {
	       if ( a[k][i]<=max) 
	       {
		           max = a[k][i];
		           x=i;
		   }
		}
		for (int j=0;j<m;j++)
		{
		   if (max < a[j][x]) 
		    {
			  dem++;
			}
		}
	    if (dem==0)
			  {    printf ("\n\n Phan tu a[%d][%d] la YEN NGUA!",k,x);
			       demm++;
		      }
	    dem=0;
	 } 
	 if (demm==0) printf("\n\n Khong co gia tri nao la YEN NGUA trong ma tran a!");
}


void Sapxep (int a[50][50],int m,int n)
{
	int tam,tamm;
    for(int i=0;i<n;i++)
    {
	   for(int j=0;j<m-1;j++)
	   {
	      for(int k=j+1;k<m;k++)
	      {
		     if (a[j][i]>a[k][i])
		     { 
		        tam=a[j][i];
		        a[j][i]=a[k][i];
		        a[k][i]= tam;
			 }
		  }
		
	   }
	}
	for(int l=0;l<m;l++)
    {
	   for(int p=0;p<n-1;p++)
	   {
	      for(int q=p+1;q<n;q++)
	      {
		     if (a[l][p]>a[l][q])
		     { 
		        tamm=a[l][p];
		        a[l][p]=a[l][q];
		        a[l][q]= tamm;
			 }
		  }
		
	   }
	}
	printf("\n Mang sau khi sap xep la: \n\n");
	for(int r=0;r<m;r++)
     {
	    for(int s=0;s<n;s++)
	    {
		   printf("  %d  ",a[r][s]);
		}
		printf("\n\n");
	 }  
	 
}

