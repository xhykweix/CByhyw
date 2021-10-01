#include <stdio.h>
#include <stdlib.h>

int main() {
	float h, w, bmi;
	printf("請輸入身高");
	scanf_s("%f", &h);
	//執行時會要求您輸入身高必須用公尺
	printf("請輸入體重");
	scanf_s("%f", &w);
	//執行時會要求您輸入體重
	printf("\n");
	bmi = w / (h * h);
	//計算BMI公式
	printf("%f", bmi);
	//輸出計算後答案
}