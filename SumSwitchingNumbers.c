//SumSwitchingNumbers.c
//
/***************************************************************************************************************
파일명칭 : SumSwitchingNumbers.c
기    능 : 1-2+3-4+5...+99-100에서 합을 구한다.
함수명칭 : main
출    력 : 합
입    력 : 없음
작성일자 : 2025/07/12
****************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>
//매크로 상수
#define MAX 100

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	int sum = 0;
	int number;
	short int sign = -1;
	int term;

	//1.수가 MAX보다 작거나 같은동안 반복한다.
	for(number=1;number<=MAX;number++){
		//1.2 부호를 바꾸다.
		sign *= -1;
		//1.3 항을 구한다.
		term = number * sign;
		//1.4 합을 구한다.
		sum += term;
		//1.5 합을 출력한다.
		printf("합 : %d\n", sum);
	}
	//2. 끝내다.
	return 0;
}