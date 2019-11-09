/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a,b ;
	FILE *fp ;
	fp=fopen("tables.txt","w") ;
	if(fp=NULL)
	{
		printf("Unable to create file") ;
		exit(0) ;
	}
	printf("Enter values of a & b") ;
	scanf("%d%d",&a,&b) ;
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=10;j++)
		{
			fprintf(fp,"%d ",i*j) ;
		}
		fprintf(fp,"\n") ;
	}
	fclose(fp) ;
	fp=fopen("tables.txt","r") ;
		if(fp=NULL)
	{
		printf("Unable to open file") ;
		exit(0) ;
	}
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=10;j++)
		{
			fscanf(fp,"%d",&a) ;
			printf("%d ",i*j) ;
		}
		printf("\n") ;
	}
	fclose(fp) ;
}*/

/* Open, write and close a file : */
//# include <stdio.h>
//# include <string.h>

/*int main( )
{
    FILE *fp ;
    char data[50];
    // opening an existing file
    printf( "Opening the file test.c in write mode" ) ;
    fp = fopen("test.c", "w") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;
        return 1;
    }
    printf( "\n Enter some text from keyboard” \
             “ to write in the file test.c" ) ;
    // getting input from user
    while ( strlen ( gets( data ) ) > 0 )
    {
        // writing in the file
        fputs(data, fp) ;   
        fputs("\n", fp) ;
    }
    
  /*  while ( strlen ( gets( data ) ) > 0 )
    {
        // writing in the file
        printf("%s",data) ;   
        //puts("\n") ;
    }*/
    // closing the file
 /*   printf("Closing the file test.c") ;
    fclose(fp) ;
    return 0;        
}*/

# include <stdio.h>
int main( )
{
         FILE *fp ;
         char data[50] ;
         printf( "Opening the file test.c in read mode" ) ;
         fp = fopen( "test1.c", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
         printf( "Reading the file test.c" ) ;
         while( fgets ( data, 50, fp ) != NULL )
         printf( "%s" , data ) ;
         printf("Closing the file test.c") ;
         fclose(fp) ;
         return 0;
}








































