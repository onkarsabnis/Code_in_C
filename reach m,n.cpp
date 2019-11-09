#include<stdio.h>
int R(int,int,int,int) ;
int main()
{
	int m,n,r ;
	printf("Enter value of m & n:") ;
	scanf("%d %d",&m,&n) ;
	r=R(0,0,m,n) ;
	printf("%d",r) ;
		
}
int R(int i,int j,int m,int n)
{
	if((i==m)&&(j==n))
	{
		return 1 ;
		
	}
	if((i>m)||(j>n))
	{
		return 0 ;
		}	
		return R(i+1,j,m,n)+R(i,j+1,m,n) ;
}
