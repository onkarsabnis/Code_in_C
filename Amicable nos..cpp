#include<stdio.h>

	int main()
	{
		int a,i,s=0,b,t=0;
		printf("Enter the first no.") ;
		scanf("%d",&a) ;
			printf("Enter the second no.") ;
		scanf("%d",&b) ;
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				printf("%d , ",i) ;
				s=s+i ;
			}
		}
		printf("\n ") ;
		
		for(i=1;i<b;i++)
		{
			if(b%i==0)
			{
				printf("%d , ",i) ;
				t=t+i ;
			}
		}
		
		if(t==a || s==b)
		{
			printf("Amicable Nos.") ;
		}
	}

