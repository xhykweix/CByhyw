#include <stdio.h>
#include <stdlib.h>

int main() {
	float h, w, bmi;
	printf("�п�J����");
	scanf_s("%f", &h);
	//����ɷ|�n�D�z��J���������Τ���
	printf("�п�J�魫");
	scanf_s("%f", &w);
	//����ɷ|�n�D�z��J�魫
	printf("\n");
	bmi = w / (h * h);
	//�p��BMI����
	printf("%f", bmi);
	//��X�p��ᵪ��
}