#include<stdio.h>
int main()
{
	int a,b,i,s=0,r ;
	printf("Enter a no. ") ;
	scanf("%d",&a)  ;
	b=a*1 ;
	while(a!=0) 
	{
		r=a%10 ;
		s = s + r*r*r ;
		a=a/10 ;
		if(a==0)
		{
			break ;
		}
	}
	printf("%d",s)  ;
	if(b==s)
	{	printf(" \n Armstrong no.") ;
	}
	
}
