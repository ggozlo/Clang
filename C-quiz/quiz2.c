
# include <stdio.h>
# include <string.h>
void main()
{
	char name[5][10], temp[10];
	int i,j, sum =0; 

	for(i=0;i<5;i++)
	{
		printf("�̸��� �Է��Ͻÿ� :");
		scanf("%s", &name[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(strcmp(name[i], name[j]) < 0)
			{
				strcpy(temp , name[i] ) ;
				strcpy(name[i] , name[j]) ;
				strcpy(name[j] , temp ); 
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%s\n", name[i]);

	}
}
