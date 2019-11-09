#include<stdio.h>
float legendre(float ,float) ;
int main()
{
	float x,n ,s;
	printf("Enter the value of x") ;
	scanf("%f",&x) ;
	printf("Enter the value of n") ;
	scanf("%f",&n) ;
	s=legendre(x,n) ;
	printf("%f",s) ;
	
}
float legendre(float x,float n)
{
	float a,b ;
	a=(2*n-1)/n ;
	b=(n-1)/n ;
	if(n==0)
	{
		return 1 ;
	}
	if(n==1)
	{
		return x ;
	}
	return a*legendre(x,n-1)*x -b*legendre(x,n-2) ;
	}
