//SumExcludingMultiples.c
//
/***********************************************************************************************************
���ϸ�Ī : SumExcludingMultiples.c
��    �� : 1���� 100���� �� �߿��� 3�� ����� 5�� ����� ������ ���� ���Ѵ�.
�Լ���Ī : main
��    �� : ��
��    �� : ����
�ۼ����� : 2025/07/19
************************************************************************************************************/
//�ܺ� ���� ���� ���
#include <stdio.h>
//��ũ�� �����
#define MAX 100
#define DIVIDE1 3
#define DIVIDE2 5

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	int sum = 0;
	int number;
	unsigned short int remainder1;
	unsigned short int remainder2;

	//1. ���� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	for (number = 1; number <= MAX; number++) {
		//1.2 3�� ������� �Ǵ��Ѵ�.
		remainder1 = number - (number / DIVIDE1 * DIVIDE1);
		//1.3 5�� ������� �Ǵ��Ѵ�.
		remainder2 = number - (number / DIVIDE2 * DIVIDE2);
		//1.4 3�� ����� 5�� ����� �ƴϸ�
		if (remainder1 != 0 && remainder2 != 0) {
			//1.4.1 ���� ���Ѵ�.
			sum += number;
			//1.4.2 ���� ����Ѵ�.
			printf("�� : %d\n", sum);
		}	
		//1.1 ���� ����.
	}
	//2.������.
	return 0;
}