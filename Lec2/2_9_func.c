#include<stdio.h>

// 함수 사용시 선언이 먼저 되어있어야함
void say_hello(void);//prototyping, function declaration


void say_hello(void)
{
	printf("Hello, World!\n");
	// void를 사용할 경우 return문 생략 가능
}

int main()
{
	say_hello(); // say_hello함수 호출 -> 함수 속 printf함수 실행
	say_hello();
	say_hello();
}