#include<stdio.h>
int main()
{
	int a,n  ; //The given number is ugly prime number if it's prime factor contains only among 2,3 or 5
	printf("Enter value of n ") ;
	scanf("%d",&n) ;
	for(a=1;a<=n;a++) 
     {
		if((a%2==0 && a%3==0) || (a%2==0 && a%5==0) || (a%5==0 && a%3==0))
	{
		printf("%d \n",a) ;
	} 
	}
}
