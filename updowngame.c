#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	//up & down project ���ڸ� �������� ���ؼ� ���ڸ� �Է��ϸ� up & down���� ��Ʈ�� �ְ� ���� �˷����ߴ� ����
	srand(time(NULL));
	int num = rand() % 99 + 1; //1~100������ ����
	printf("���� ���ڴ� %d�Դϴ�.\n", num);
	int call;
	int chance = 5;

	for (int chance = 0; chance < 5; chance++)
	{
		printf("���ڸ� ���Ͻʽÿ�.\n");
		scanf_s("%d", &call);
		if (call < num)
		{
			printf("UP\n");
		}
		else if (call > num)
		{
			printf("DOWN\n");
		}
		else if (call == num)
		{
			printf("�����Դϴ�.\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߽��ϴ�.");
		}
		printf("��ȸ�� %d�� ���ҽ��ϴ�.\n", 5-chance);
		
	}
	

	return 0;
}

/*



	int number;
	printf("���ڸ� �Է��Ͻʽÿ�");
	scanf_s("%d", &number);
	srand(time(NULL));
	int i = rand() % 99 +1;
	
	for (int j = 0; j < 5; j++);
	{
		if (number > i)
		{
			printf("DOWN");
		}
		else if (number < i)
		{
			printf("UP");
		}
		else if (number == i)
		{
			printf("CORRECT");
		}

		printf("%d�� ��ȸ�� ���ҽ��ϴ�.\n", 5-j);

	}


	//�� Ǯ��
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1~ 100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) // while(1) -> ��, 0�̸� ����, 1�̶�� �����ϸ� while ���� ��� ������ ������.
	{
		printf("���� ��ȸ %d ��\n", chance - 1);
		printf("���ڸ� ���纸����. (1~100����)\n");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWN \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�. \n\n");
			break; //break �־ ���� chance�� ���� ������� Ż��
		}
		else
		{
			printf("�� �� ���� ������ �߻��߽��ϴ�.");
		}
	}
*/