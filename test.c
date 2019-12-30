#include <stdio.h>
#include <stdlib.h>

// 正整数的原码,反码,补码相同, 负整数的原码,反码,补码通过计算得到
// 一个数的原码是这个数直接转化成二进制
// 反码是原码的二进制符号位不变, 其他位按位取反
// 补码是反码的二进制加1
// 大小端字节序指的是数据在电脑上存储的字节顺序
// 大端字节序是把数据的高字节内容放到低地址, 低字节内容放到高地址
// 小端字节序是把数据的高字节内容放在高地址, 低地址内容放在低地址
// 0x1234 小端序:34 12 00 00,  大端序: 00 00 12 34
// 看成数组取 小端序: 34,      大端序: 00


int main(){
	//unsigned char a = 200;
	//unsigned char b = 100;
	//unsigned char c = 0;// 0 - 255
	//c = a + b;
	//printf("%d %d", a + b, c);// 300 , 300 - 256 = 44
	// %d 造成整形提升,处理为4字节数,

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
	//lld要了8 字节, 只有 float 和 double ,long long独占8字节,其他都是4字节, 读的时候取决于占位符后的东西,

	system("pause");
	return 0;

}