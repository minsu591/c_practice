//������Ʈ 5 - �迭
// �ƺ��� ��Ӹ�

#include <stdio.h>
int main_array(void)
{
	//�迭
	/*
	int subway_1 = 30; // ����ö 1ȣ������ 30�� Ÿ�� ����
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n",subway_1);
	printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n",subway_2);
	printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n",subway_3);
	*/

	//������ ������ �����ؼ� ���� �� �ִ� �ڷ��� - �迭

	/*
	//���� ���� ������ �Բ� ���ÿ� ����
	int subway_array[3]; //�� ���� int�� ���� ������ ���� ���̳ĸ� ���ȣ �ȿ� �ֱ�
	subway_array[0] = 30; //�迭�� index���� 0���� �����ϹǷ�
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�\n", i + 1, subway_array[i]);
	}
	*/

	/*
	//�迭 ������ �� ����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	/*
	//���� �ϰ� �� �ʱ�ȭ�� ���� ������ �� �� ���� ���� ����
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//�迭 ũ��� �׻� ����� ����
	/*
	int size = 10;
	int arr[size]; //�Ŀ� ������� ���� ��, ���� ���ڰ��� ����־�� ��밡��
	*/

	/*
	int arr[10] = { 1, 2}; //�������� ���� 3��° �����ʹ� �ڵ����� 0���� �ʱ�ȭ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1, 2 }; //arr[2]�� ����


	//float���� ��
	/*
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	*/

	/*
	//����(�� ������ ����) vs ���ڿ�(�� ���� �̻��� ���� ����)
	char c = 'A';
	printf("%c\n", c);

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL����('\0')�� �׻� ���ԵǾ����
	//char str[6] = "coding"; // [c] [o] [d] [i] [n] [g]
	char str[7] = "coding"; //coding�̶�� ���ڸ� ��Ÿ���� �ڵ����� \0�� ��
	printf("%s\n", str);
	*/

	
	/*
	char str[] = "coding"; //�˾Ƽ� \0�� ä���
	printf("%s\n", str);
	printf("%d\n", sizeof(str)); //sizeof �迭�� ������ ������ ũ�⸦ �˷��ִ�

	
	//�� ĭ�� ����� ǥ���غ��� �������� ����ִ� ���� ���� -> NULL����
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}
	*/

	/*
	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//����� 1���ڰ� 1 byte
	//�ѱ��� 1���ڰ� 2 byte
	//�� ��
	//En gl ish -> �̷��� �����ϱ�
	//char ũ�� 1 byte (������ ���� ��Ÿ����)

	*/

	//char c_array[7] = { 'c', 'o', 'd','i','n','g','\0' };
	//printf("%s\n", c_array);

/*
	char c_array[10] = { 'c', 'o', 'd','i','n','g'}; //���� ������ �ֱ⸸ �ϸ� �ڵ����� �� ���� �� ���� ��
	printf("%s\n", c_array);
	for (int i = 0; i < 10; i++)
	{
		printf("%c\n", c_array[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", c_array[i]);
	}
	//%d�� ����ϸ� ���ڰ� ����
	//ASCII �ڵ� �� ��� (null ���ڴ� 0���� �Էµ�)
	*/

/*
	//���ڿ� �Է¹ޱ� : ������ ���� ���� ����
	char name[256];
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
	*/

	//���� : ASCII �ڵ� : ANSI (�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	//7bit : �� 128�� �ڵ� (0-127)
	// a : 97 (���� a�� �ƽ�Ű�ڵ�� ���� 97)
	// A : 65
	// 0 : 48
	//���� ȣȯ ������ ���� ���� ���� ������

/*
	printf("%c\n", 'a');
	printf("%d\n", 'a');
	
	printf("%d\n", '\0');
*/	

/*
//����2 : 0-127 ������ �ƽ�Ű�ڵ� �������� �ش��ϴ� ���� Ȯ��
	for (int i = 0; i < 128; i++)
	{
	printf("%c�� �ƽ�Ű�ڵ� ���� %d�̴�.\n", i, i);
	}
*/
	
	return 0;
	
}