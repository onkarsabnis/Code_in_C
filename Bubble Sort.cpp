#include<stdio.h>
int main()
{
	int i,a[5],c,j  ;
	printf("Enter any 5 nos.")  ;
	for(i=0;i<5;i++)
	{   scanf("%d",&a[i])  ;
	}
	for(j=1;j<=5;j++)
{
		for(i=5;i>=1;i--)
	{
		if(a[i-1]>a[i])
		{
		c=a[i-1] ;
		a[i-1]=a[i] ;
		a[i]=c ;  }
	}  }
printf("Sorted array is")  ;
for(i=0;i<5;i++)	
{   printf("\n  %d",a[i])  ;
}
	                   
} 


