#include <stdio.h>
#include <stdlib.h>
int main() {
	int s;
	float p, r,T;
	printf("�п�J������Ƥj�p");
	scanf_s("%d",&s);
	printf("�п�J��ƪ��򥢲v");
	scanf_s("%f", &p);
	printf("�п�J������Ʀb�����Ӧ^���ɶ�");
	scanf_s("%f", &r);
	T = s / r + (4 * r * p * (1 + (32 * p * p)));
	if (p <= 1 && p>=0)	
	    printf("%f", T);
	else
		printf("��ƿ�J���~");
}