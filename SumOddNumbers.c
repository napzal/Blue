//SumOddNumbers.c
//
/**************************************************************************************************
���ϸ�Ī : SumOddNumbers.c
��    �� : 1+3+5+7+...+99���� Ȧ���� ���� ���Ѵ�.
�Լ���Ī : main
��    �� : ��
��    �� : ����
�ۼ����� : 2025/07/09
***************************************************************************************************/
#include <stdio.h>
#define MAX 99
#define DIFFERENCE 2

int main(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int sum = 0;
	int number;

	//1.���� MAX���� �۰ų� ������ �ݺ��Ѵ�.
	for (number = 1; number <= MAX; number+=DIFFERENCE) {
		//1.2 ���� ���Ѵ�.
		sum += number;
		//1.3 ���� ����Ѵ�.
		printf("�� : %d\n", sum);
		//1.1 ���� ����.
	}
	//2. ������.
	return 0;
}