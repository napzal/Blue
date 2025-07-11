//SumOddAndEvenNumbers.c
//
/********************************************************************************************************
파일명칭 : SumOddAndEvenNumbers.c
기    능 : 1에서 100까지 수 중 홀수의 합과 짝수의 합을 구한다.
함수명칭 : main
출    력 : 홀수의 합, 짝수의 합
입    력 : 없음
작성일자 : 2025/07/10
*********************************************************************************************************/
//외부파일 포함 기능
#include <stdio.h>
//매크로 상수들
#define MAX 100
#define DIVIDE 2

//함수 선언 : 함수 원형
int main(int argc, char* argv[]);

//함수 정의 
int main(int argc, char* argv[]) {
	//자동변수들 선언 및 정리
	int sumOfOdd = 0;
	int sumOfEven = 0;
	int number;
	int remainder;

	//1. 수가 MAX보다 작거나 같으면 반복한다.
	for (number = 1; number <= MAX; number++) {
		//1.2 나머지를 구한다.
		remainder = number - (number / DIVIDE * DIVIDE);
		//1.3 나머지에 따라 홀수 짝수 여부를 판단한다.
		if (remainder == 1) {
			//1.4 홀수이면 홀수의 합을 구한다.
			sumOfOdd += number;
		}
		else {
			//1.5 짝수이면 짝수의 합을 구한다.
			sumOfEven += number;
		}
		//1.6 홀수의 합과 짝수의 합을 출력한다.
		printf("홀수의 합 : %d,짝수의 합 : %d\n", sumOfOdd, sumOfEven);
		//1.1 수를 세다.
	}	
	//2. 끝내다.
	return 0;
}