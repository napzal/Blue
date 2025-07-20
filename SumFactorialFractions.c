//SumFactorialFractions.c
//
/**********************************************************************************************************************
파일명칭 : SumFactorialFractions.c
기    능 : 1-(2/3!)+(3/5!)-...-(10/19!) 합을 구한다.
함수명칭 : main
출    력 : 합
입    력 : 없음
작성일자 : 2025/07/21
***********************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>
//매크로 상수
#define MAX 10

//함수 선언
int main(int argc, char* argv[]);
//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float sum = 0;
	int numerator;
	int denominator = -1;
	unsigned long int factorial;
	float fraction;
	short int sign = -1;
	unsigned long int i;

	//1.분자가 MAX보다 작거나 같은동안 반복한다.
	for (numerator = 1; numerator <= MAX; numerator++) {
		//1.2 분모를 구한다.
		denominator += 2;
		//1.3 팩토리얼을 구한다.
		factorial = 1;
		i = 1;
		while (i <= denominator) {
			factorial *= i;
			i++;
		}
		//1.4 분수를 구한다.
		fraction = (float)(numerator)/ factorial;
		//1.5 부호를 바꾼다.
		sign *= -1;
		//1.6 합을 구한다.
		sum += (fraction * sign);
		//1.7 합을 출력한다.
		printf("합 : %.6f\n", sum);
		//1.1 분자를 구한다.
	}
	//2. 끝내다.
	return 0;
}