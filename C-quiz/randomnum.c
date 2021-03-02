# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void main()
{
	int random;
	int i, num, cnt =0; 
	
	random = rand()%100 +1;

	while(num != random)
	{
		printf("숫자를 입력하세요 :");
		scanf("%d", &num);
		cnt++;
		
		if(num == random)
		{
			printf("정답입니다!\n");
			printf(" %d 번 째에 맞췄습니다!\n", cnt);
			break;
		}
		else if(num > random)
		{
			printf("입력한 숫자가 큽니다...\n");
		}
		else  printf("입력한 숫자가 작습니다...\n");
	}

}
