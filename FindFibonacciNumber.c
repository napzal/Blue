//FindFibonacciNumber.c
//
/***********************************************************************************************************
���ϸ�Ī : FindFibonacciNumber.c
��    �� : �Ǻ���ġ(Fibonacci) ���� 1,1,2,3,5,8,13,21... ���� 50�� ° ���� ���Ѵ�.
�Լ���Ī : main
��    �� : �Ǻ���ġ ��
��    �� : ����
�ۼ����� : 2025/07/22
************************************************************************************************************/
//�ܺ� ���� ���� ���
#include <stdio.h>
//��ũ�� ���
#define MAX 50

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ���� 
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	unsigned long long int fibonacciNumber = 1;
	unsigned long long int beforeNumber = 0;
	unsigned long long int twoBeforeNumber;
	unsigned int positionOfTerm;

	//1.�� ��ġ�� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	for (positionOfTerm = 1; positionOfTerm <= MAX; positionOfTerm++) {
		//1.5 �� ��ġ�� �Ǻ���ġ ���� ����Ѵ�.
		printf("%d��° �� : %lld\n", positionOfTerm, fibonacciNumber);
		//1.1 �� �� ���� ���Ѵ�.
		twoBeforeNumber = beforeNumber;
		//1.2 �� ���� ���Ѵ�.
		beforeNumber = fibonacciNumber;
		//1.3 �Ǻ���ġ ���� ���Ѵ�.
		fibonacciNumber = twoBeforeNumber + beforeNumber;
		//1.4 �� ��ġ�� ���Ѵ�.
	}
	//2. ������.
	return 0;
}