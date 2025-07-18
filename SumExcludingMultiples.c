//SumExcludingMultiples.c
//
/***********************************************************************************************************
파일명칭 : SumExcludingMultiples.c
기    능 : 1에서 100까지 수 중에서 3의 배수와 5의 배수를 제외한 합을 구한다.
함수명칭 : main
출    력 : 합
입    력 : 없음
작성일자 : 2025/07/19
************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>
//매크로 상수들
#define MAX 100
#define DIVIDE1 3
#define DIVIDE2 5

//함수 선언
int main(int argc, char* argv[]);
//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	int sum = 0;
	int number;
	unsigned short int remainder1;
	unsigned short int remainder2;

	//1. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//1.2 3의 배수인지 판단한다.
		remainder1 = number - (number / DIVIDE1 * DIVIDE1);
		//1.3 5의 배수인지 판단한다.
		remainder2 = number - (number / DIVIDE2 * DIVIDE2);
		//1.4 3의 배수와 5의 배수가 아니면
		if (remainder1 != 0 && remainder2 != 0) {
			//1.4.1 합을 구한다.
			sum += number;
			//1.4.2 합을 출력한다.
			printf("합 : %d\n", sum);
		}	
		//1.1 수를 세다.
	}
	//2.끝내다.
	return 0;
}