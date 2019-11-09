#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int euclid(int a,int b)
{  
	int i,r,c,d,e ;
	if(a>b)	
{	 
	while(b!=0) 
	   {
		   	r = a/b ;
		c = a-r*b ;
		
		a=b ;
		b=c ;
		} 
		  d=a ;      
		  return(d) ;
				
	 }
	
	else
	
	 	{	if(a<b)	
	  
{
		 while(a!=0)  
	   {
		   	r = b/a ;
		c = b-r*a ;
		b=a ;
		a=c ;
		
	}
	e=b ;
	 return(e) ;
	} 

	
	
}  }

int main()
{
	int a,b,ans ;
	printf("Enter two nos.  ") ;
	scanf("%d%d",&a,&b)  ;
	ans=euclid(a,b)  ;
	printf(" \n GCD is %d",ans)  ;
	
	
}
