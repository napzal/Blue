//SumOddAndEvenNumbers.c
//
/********************************************************************************************************
���ϸ�Ī : SumOddAndEvenNumbers.c
��    �� : 1���� 100���� �� �� Ȧ���� �հ� ¦���� ���� ���Ѵ�.
�Լ���Ī : main
��    �� : Ȧ���� ��, ¦���� ��
��    �� : ����
�ۼ����� : 2025/07/10
*********************************************************************************************************/
//�ܺ����� ���� ���
#include <stdio.h>
//��ũ�� �����
#define MAX 100
#define DIVIDE 2

//�Լ� ���� : �Լ� ����
int main(int argc, char* argv[]);

//�Լ� ���� 
int main(int argc, char* argv[]) {
	//�ڵ������� ���� �� ����
	int sumOfOdd = 0;
	int sumOfEven = 0;
	int number;
	int remainder;

	//1. ���� MAX���� �۰ų� ������ �ݺ��Ѵ�.
	for (number = 1; number <= MAX; number++) {
		//1.2 �������� ���Ѵ�.
		remainder = number - (number / DIVIDE * DIVIDE);
		//1.3 �������� ���� Ȧ�� ¦�� ���θ� �Ǵ��Ѵ�.
		if (remainder == 1) {
			//1.4 Ȧ���̸� Ȧ���� ���� ���Ѵ�.
			sumOfOdd += number;
		}
		else {
			//1.5 ¦���̸� ¦���� ���� ���Ѵ�.
			sumOfEven += number;
		}
		//1.6 Ȧ���� �հ� ¦���� ���� ����Ѵ�.
		printf("Ȧ���� �� : %d,¦���� �� : %d\n", sumOfOdd, sumOfEven);
		//1.1 ���� ����.
	}	
	//2. ������.
	return 0;
}