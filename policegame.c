#include <stdio.h>
int main(void)
{
	//������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	//printf("1\n");
	//printf("2\n"); //2�� �������� ����Ƿ� �ּ� ó��
	//printf("3\n");

	// �Ǽ��� ������ ���� ����
	/*
	float f = 46.5f; // ���� �ڿ��� f ���̱�
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);
	*/

	/*
	//��� ����� ��� const �߰�
	const int YEAR = 2000; // ����� ����, �Ʒ��ʿ��� YEAR�� ���� �ٲ� �� ����
	printf("�¾ �⵵ : %d\n", YEAR);
	*/

	// printf
	// ����
	
	/*
	int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d x %d = %d\n", 30, 70, 30 * 70);
	*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input); //scanf�ڿ� _s�� ���� �޴� �� ����, input �տ� &��  input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴ�
	printf("�Է°� : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);
	*/


	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	
	/*char str[256]; //256���� ���ڸ� ���
	scanf_s("%s", str, sizeof(str)); //���ڿ� �Է¿��� &��� ����, sizeof��°� �̿��� 256���� ���� �̻��� ���� ����
	printf("%s\n", str);
	*/

	

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm �̿���? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n---������ ���� ---\n\n");
	printf(" �̸�       :%s\n", name);
	printf(" ����       :%d\n", age);
	printf(" ������     :%.2f\n", weight);
	printf(" Ű         :%.2lf\n", height);
	printf(" ���˸�     :%s\n", what);

	return 0;
}