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
		printf("���ڸ� �Է��ϼ��� :");
		scanf("%d", &num);
		cnt++;
		
		if(num == random)
		{
			printf("�����Դϴ�!\n");
			printf(" %d �� °�� ������ϴ�!\n", cnt);
			break;
		}
		else if(num > random)
		{
			printf("�Է��� ���ڰ� Ů�ϴ�...\n");
		}
		else  printf("�Է��� ���ڰ� �۽��ϴ�...\n");
	}

}
