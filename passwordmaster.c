//project 4, �Լ�
#include <stdio.h>

//����
void p(int num);
void function_without_return(); //���� �ϴ°Ŷ� �����ݷ����� ���� ������
int function_with_return();
void function_without_parameters();
void function_with_parameters(int num1, int num2, int num3);

int apple(int total, int ate); //��ü total������ ate���� �԰� ���� ���� ��ȯ

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_passwordmasterpractice(void)
{

	/*
	//function
	//����

	int num = 2;
	//printf("num�� %d �Դϴ�\n", num);
	p(num);

	// 2 + 3��?
	num = num + 3; // num += 3
	//printf("num�� %d �Դϴ�\n", num);
	p(num);

	// 5 -1 ��?
	num -= 1; // num = num -1
	//printf("num �� %d �Դϴ�\n", num);
	p(num);

	// 4 * 3 =?
	num *= 3;
	//printf("num �� %d �Դϴ�\n", num);
	p(num);

	// 12/ 6��?
	num /= 6;
	//printf("num�� %d �Դϴ� \n", num);
	p(num);

	----(1)
	*/ 

	//��ȯ ���� ���� �Լ�
	//function_without_return(); ----(2)

	//��ȯ ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret); -------(3)
	*/

	//�Ķ����(���ް�)�� ���� �Լ�
	//function_without_parameters();

	//�Ķ����(���ް�)�� �ִ� �Լ�
	//function_with_parameters(35, 24, 32);

	//�Ķ����(���ް�)�� ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); //5���� ��� �߿��� 2���� �Ծ����
	//printf("���� ����� %d�� �Դϴ�.\n", ret);
	//printf("��� %d �߿� %d���� ������ %d���� ���ƿ�\n", 10, 4, apple(10,4)); //printf������ �Լ� Ȱ��


	//���� �Լ� (project)
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);



	return 0;
}




//���� 
//(main �Լ� ������ void p(int num);���� ������ �ϰ� main�Լ� �Ʒ����� ���� �������� ���ȣ ��� �Լ� ����

void p(int num)  // void �Լ��̸�(���ް�)
{
	printf("num�� %d�Դϴ�\n", num);

}


//��ȯ�� �Լ��̸�(���ް�) //�Լ����� 
// ���ް� 36
// �Լ� �� + 4
// ��ȯ�� ?
//���� - char, ���� int, �Ǽ� double, float, ��ȯ���� �ʰڴ� void
//���ް� ���ް��� (int num1, int num2, char c, float f)������ ���� ���� ������ �����ѰŶ� �Ȱ��� �ؾ���.----(1)




//�Լ� ����

//��ȯ���� ���� �Լ� (��ȯ���� ��� �ƹ� �͵� �� �ʿ� ����)
void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}
//------(2)

//��ȯ���� �ִ� �Լ�
int function_with_return() //�� �Լ��� ȣ���ϸ� �Լ� ���� � ������ �����ϰ� 10�̶�� ���ڸ� ��ȯ����
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}
//---------(3)

//�Ķ����(���ް�)�� ���� �Լ�
void function_without_parameters()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

//�Ķ����(���ް�)�� �ִ� �Լ�
void function_with_parameters(int num1,int num2,int num3)
{
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�.\n", num1, num2, num3);

}

int apple(int total, int ate)
{
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}
int mul(int num1, int num2)
{
	return num1 * num2;
}
int div(int num1, int num2)
{
	return num1 / num2;
}

//main �Լ� ������ �Լ��� ������ ��.