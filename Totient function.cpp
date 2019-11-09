#include<stdio.h>
#include<conio.h>
main()
{
	int a,i ;
	printf("Enter any no.  ") ;
	scanf("%d",&a) ;
	printf("1") ;
	for(i=1;i<a;i++)
	{
		if( a%i!=0 && ( (a+i)%2!=0 || (a+i)%3!=0 || (a+i)%5!=0 || (a+i)%7!=0 ) )
		printf("\n %d",i) ;
				} 
} 
