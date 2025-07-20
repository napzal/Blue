//SumFactorialFractions.c
//
/**********************************************************************************************************************
���ϸ�Ī : SumFactorialFractions.c
��    �� : 1-(2/3!)+(3/5!)-...-(10/19!) ���� ���Ѵ�.
�Լ���Ī : main
��    �� : ��
��    �� : ����
�ۼ����� : 2025/07/21
***********************************************************************************************************************/
//�ܺ� ���� ���� ���
#include <stdio.h>
//��ũ�� ���
#define MAX 10

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	float sum = 0;
	int numerator;
	int denominator = -1;
	unsigned long int factorial;
	float fraction;
	short int sign = -1;
	unsigned long int i;

	//1.���ڰ� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	for (numerator = 1; numerator <= MAX; numerator++) {
		//1.2 �и� ���Ѵ�.
		denominator += 2;
		//1.3 ���丮���� ���Ѵ�.
		factorial = 1;
		i = 1;
		while (i <= denominator) {
			factorial *= i;
			i++;
		}
		//1.4 �м��� ���Ѵ�.
		fraction = (float)(numerator)/ factorial;
		//1.5 ��ȣ�� �ٲ۴�.
		sign *= -1;
		//1.6 ���� ���Ѵ�.
		sum += (fraction * sign);
		//1.7 ���� ����Ѵ�.
		printf("�� : %.6f\n", sum);
		//1.1 ���ڸ� ���Ѵ�.
	}
	//2. ������.
	return 0;
}