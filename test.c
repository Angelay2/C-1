#include <stdio.h>
#include <stdlib.h>

// ��������ԭ��,����,������ͬ, ��������ԭ��,����,����ͨ������õ�
// һ������ԭ���������ֱ��ת���ɶ�����
// ������ԭ��Ķ����Ʒ���λ����, ����λ��λȡ��
// �����Ƿ���Ķ����Ƽ�1
// ��С���ֽ���ָ���������ڵ����ϴ洢���ֽ�˳��
// ����ֽ����ǰ����ݵĸ��ֽ����ݷŵ��͵�ַ, ���ֽ����ݷŵ��ߵ�ַ
// С���ֽ����ǰ����ݵĸ��ֽ����ݷ��ڸߵ�ַ, �͵�ַ���ݷ��ڵ͵�ַ
// 0x1234 С����:34 12 00 00,  �����: 00 00 12 34
// ��������ȡ С����: 34,      �����: 00


int main(){
	//unsigned char a = 200;
	//unsigned char b = 100;
	//unsigned char c = 0;// 0 - 255
	//c = a + b;
	//printf("%d %d", a + b, c);// 300 , 300 - 256 = 44
	// %d �����������,����Ϊ4�ֽ���,

	//char c = -1;
	//printf("%x", c);// ffffffff

	//unsigned int a = 3E9;
	//unsigned int b = 2E9;
	//unsigned int c = 0;

	//unsigned int a = 3E9;
	//unsigned int b = 2E9;
	//unsigned int c = 0;

	unsigned int a = 0x90000000;
	unsigned int b = 0x90000000;
	unsigned int c = 0;
	c = a + b;
	printf("%x %x\n", a + b, c);// 20000000, 20000000
	printf("%llx %x\n", a + b,c);// 2000000020000000 ,O
	//lldҪ��8 �ֽ�, ֻ�� float �� double ,long long��ռ8�ֽ�,��������4�ֽ�, ����ʱ��ȡ����ռλ����Ķ���,

	system("pause");
	return 0;

}