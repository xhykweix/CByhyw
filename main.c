#include <stdio.h>
#include <stdlib.h>

int main() {
	int c, f;
	printf("請輸入攝氏溫度");
	scanf_s("%d", &c);
	f = (c * 9) / 5 + 32;
	printf("攝氏溫度%d度=華式%d度", c, f);

}