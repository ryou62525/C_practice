#include <stdio.h>


int main(){

int num1, num2;
int num3;

puts("整数を入力してください。");
printf("整数１："); scanf("%d", &num1);
printf("整数２："); scanf("%d", &num2);

num3 = num1 + num2;


printf("入力した数の和は%dです。\n", num3);

	return 0;
}