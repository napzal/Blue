//SumSwitchingFractions.c
//
/*****************************************************************************************************************
파일명칭 : SumSwitchingFractions.c
기    능 : 1-1/2+1/3-1/4...+1/99-1/100을 합한다.
함수명칭 : main
출    력 : 합
입    력 : 없음
작성일자 : 2025/07/20
******************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>

//매크로 상수
#define MAX 100

//함수 선언
int main(int argc, char* argv[]);
//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정리
	float sum = 0;
	int number;
	float fraction;
	short int sign = -1;

	//1. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//1.2 분수를 구한다.
		fraction = (1.0F) / number;
		//1.3 부호를 바꾼다.
		sign *= -1;
		//1.4 합을 구한다.
		sum += (sign * fraction);
		//1.5 합을 출력한다.
		printf("합 : %.4f\n", sum);
		//1.1 수를 세다.
	}
	//2. 끝내다.
	return 0;
}