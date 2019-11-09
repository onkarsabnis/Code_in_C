#include<stdio.h>
int main()
{
	int a,b,c,d,e ;

	for(a=1;a<30;a++)
	{
	for(b=1;b<30;b++)
	{
	for(d=1;d<30;d++)
	{   
		
	for(e=1;e<30;e++)
	{
		for(c=1;c<2000;c++)		
		 {		 
			   
			if(c==a*a*a + b*b*b && c==d*d*d + e*e*e && a!=d && b!=e && a!=e && b!=d )
		  {
		  printf(" \n %d %d %d",a,b,c)  ;
		  printf(" \n %d %d %d",d,e,c)  ; }
		    } } } }  
			printf("  \n  ")  ;
	}
	
	
	
	
}
