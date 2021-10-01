#include <stdio.h>
#include <stdlib.h>
int main() {
	int s;
	float p, r,T;
	printf("請輸入網路資料大小");
	scanf_s("%d",&s);
	printf("請輸入資料的遺失率");
	scanf_s("%f", &p);
	printf("請輸入網路資料在網路來回的時間");
	scanf_s("%f", &r);
	T = s / r + (4 * r * p * (1 + (32 * p * p)));
	if (p <= 1 && p>=0)	
	    printf("%f", T);
	else
		printf("資料輸入錯誤");
}