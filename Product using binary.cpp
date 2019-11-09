#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,u=0,s=0,q,r,k=0 ;
	printf("Enter no. a") ;
	scanf("%d",&a) ;
	printf("Enter no. b") ;
	scanf("%d",&b) ;
	q=b*1 ;
	for(i=1;b!=0;i++)
	{
		b=b/2 ;
		u++ ;
		
	}
//	printf("%d",u) ;
	for(i=1;q!=0,k<u;i++)
	{
		r=q%2 ;
		q=q/2 ;
		s=s+r*pow(2,(k)) ;
		k++ ;
	}
	printf("Product is %d ",a*s) ;
}
