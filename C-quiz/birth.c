# include <stdio.h>
# include <string.h>

void main()
{
	char a[] = {"951230-3456789"};
	
	int year = (a[0]-48)*10 + (a[1]-48) + 1900;
	
	printf("%d",year);
}
