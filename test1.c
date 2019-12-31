#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// printf 的 操作
// 1. 压入缓存 double longlong 压入 8 字节, 其他都为 4 字节
// 2. 读 %f %ll...读 8 字节,其他的读 4 字节,
// fflush(NULL) // 强制清空输出缓存 如果输出缓存满了 输出一半 压一半
int main(){
	int a;
	float b, c;
	// 9876543210
	scanf("%2d%3f%4f", &a, &b, &c); // 每敲一下键盘,进输入缓存, 回车输入缓存内的东西提交,处理 ,回显, 打印
	printf("a = %d, b = %f, c = %f\n", a, b, c);// 正常宽度
	printf("a = %d, b = %d, c = %f\n", a, b, c);// b, c 都为0,一共压入4+8+8 = 20字节, 读了4 + 4 + 8 =16字节
	//9 + 11 + 1 = 21(SME) 0 100000001000 011111101 => 4087E800




	system("pause");
	return 0;

}