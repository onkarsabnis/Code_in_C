#include<stdio.h>
int lucas(int,int,int ) ;
int main()
{
	int LUC,i,n,a,b ;
	/*printf("Enter value of n") ;
	scanf("%d",&n) ;*/
	printf("Enter value of i:");
	scanf("%d",&i);
	printf("Enter value of b:") ;
	scanf("%d",&b) ;
	printf("Enter value of a:") ;
	scanf("%d",&a) ;
	
	LUC=lucas(i,a,b) ;
	printf(" u%d is %d",i,LUC) ;
	
	
}
int lucas(int i,int a,int b)
{
	
	int U ;
	if(i==1) return 1 ;
	if(i==0) return 0 ;
	
	
	
	/*for(j=1;j<=n;j++)
	{*/
	U=a*(lucas(i-1,a,b))-b*(lucas(i-2,a,b)) ;
		//printf("%d \n",U) ;  //}
		return U ;
		
	
	
}
