#include<stdio.h>
void read(int) ;
struct{
	int marks ;
	char name[20] ;
	
}stud[100],temp ;
int main()
{
	int n,max,i,j ;
	printf("Enter no. of students:") ;
	scanf("%d",&n) ;
	
	for(i=0;i<n;i++)
	{
		read(i) ;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(stud[i].marks>stud[j].marks)
			{
				temp = stud[i].marks ;
				stud[i].marks=stud[j].marks ;
				stud[j].marks=temp ;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s:%d \n",stud[i].name,stud[i].marks) ;
	}
}
void read(int i)
{
	printf("Enter Name:") ;
	scanf("%s",&stud[i].name) ;
	printf("Enter marks:") ;
	scanf("%d",&stud[i].marks) ;
}
