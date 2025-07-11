//SumOddNumbers.c
//
/**************************************************************************************************
파일명칭 : SumOddNumbers.c
기    능 : 1+3+5+7+...+99까지 홀수의 합을 구한다.
함수명칭 : main
출    력 : 합
입    력 : 없음
작성일자 : 2025/07/09
***************************************************************************************************/
#include <stdio.h>
#define MAX 99
#define DIFFERENCE 2

int main(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	int sum = 0;
	int number;

	//1.수가 MAX보다 작거나 같으면 반복한다.
	for (number = 1; number <= MAX; number+=DIFFERENCE) {
		//1.2 합을 구한다.
		sum += number;
		//1.3 합을 출력한다.
		printf("합 : %d\n", sum);
		//1.1 수를 세다.
	}
	//2. 끝내다.
	return 0;
}