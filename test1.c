#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// printf �� ����
// 1. ѹ�뻺�� double longlong ѹ�� 8 �ֽ�, ������Ϊ 4 �ֽ�
// 2. �� %f %ll...�� 8 �ֽ�,�����Ķ� 4 �ֽ�,
// fflush(NULL) // ǿ������������ �������������� ���һ�� ѹһ��
int main(){
	int a;
	float b, c;
	// 9876543210
	scanf("%2d%3f%4f", &a, &b, &c); // ÿ��һ�¼���,�����뻺��, �س����뻺���ڵĶ����ύ,���� ,����, ��ӡ
	printf("a = %d, b = %f, c = %f\n", a, b, c);// �������
	printf("a = %d, b = %d, c = %f\n", a, b, c);// b, c ��Ϊ0,һ��ѹ��4+8+8 = 20�ֽ�, ����4 + 4 + 8 =16�ֽ�
	//9 + 11 + 1 = 21(SME) 0 100000001000 011111101 => 4087E800




	system("pause");
	return 0;

}