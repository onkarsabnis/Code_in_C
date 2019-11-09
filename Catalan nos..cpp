#include<stdio.h>
#include<math.h>
int catalan(int) ;
int main()
{
	int n,c ;
	printf("Enter the value of n: ") ;
	scanf("%d",&n) ;
	c=catalan(n) ;
	printf("%d",c) ;
}
int catalan(int n)
{
	int f=0,i ;
	if(n==0)
	{
		return 1 ;
	}
	for(i=0;i<n;i++)
	{
		f=f+catalan(i)*catalan(fabs(n-i-1)) ;
	}
	return f ;
}
