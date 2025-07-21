//FindFibonacciNumber.c
//
/***********************************************************************************************************
파일명칭 : FindFibonacciNumber.c
기    능 : 피보나치(Fibonacci) 수열 1,1,2,3,5,8,13,21... 에서 50번 째 수를 구한다.
함수명칭 : main
출    력 : 피보나치 수
입    력 : 없음
작성일자 : 2025/07/22
************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>
//매크로 상수
#define MAX 50

//함수 선언
int main(int argc, char* argv[]);
//함수 정의 
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned long long int fibonacciNumber = 1;
	unsigned long long int beforeNumber = 0;
	unsigned long long int twoBeforeNumber;
	unsigned int positionOfTerm;

	//1.항 위치가 MAX보다 작거나 같은동안 반복한다.
	for (positionOfTerm = 1; positionOfTerm <= MAX; positionOfTerm++) {
		//1.5 항 위치와 피보나치 수를 출력한다.
		printf("%d번째 수 : %lld\n", positionOfTerm, fibonacciNumber);
		//1.1 전 전 수를 구한다.
		twoBeforeNumber = beforeNumber;
		//1.2 전 수를 구한다.
		beforeNumber = fibonacciNumber;
		//1.3 피보나치 수를 구한다.
		fibonacciNumber = twoBeforeNumber + beforeNumber;
		//1.4 항 위치를 구한다.
	}
	//2. 끝내다.
	return 0;
}