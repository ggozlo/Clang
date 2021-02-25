#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void main()
{
	char a[5][10] ;
	int rank[5], r, i ,j;
	char temp;
	char t_str [10];
	char b[5], c;
	
	for(i=0;i<5;i++)
	{
	printf("이름을 입력하시오 :");
	scanf("%s", &a[i]);
	}
	

   	printf("[ ");
   for(i=0;i<5;i++)
   {

   	printf(" %4s,", a[i]);

   }
    printf("\b ]\n");   	
    

   
   for(i = 0 ; i  < 5 ; i++)
   {
   		for(j=0;j<5;j++)
   		{
 //  			if(a[i][0]<a[j][0])
 			if(strcmp(a[i],a[j]) < 0 )
			{
				strcpy(t_str, a[i]);
				strcpy(a[i] , a[j]);
				strcpy(a[j] , t_str);		

			}
		}
   }
   
    printf("[ ");
   for(i=0;i<5;i++)
   {
   	printf(" %4s,", a[i]);
   }
   	printf("\b ]");

printf("\n==========================================================\n");
}


