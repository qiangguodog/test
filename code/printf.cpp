#include <stdio.h>

int main()

{
	int i = 47;

	printf("欢迎来到C世界\n"); // \n表示换行

	printf("%d\n", i); //d是十进制输出控制符

	printf("%x\n", i); //十六进制输出
	printf("%X\n", i); //十六进制大写输出
	printf("%#x\n",i); //加0x前缀输出
	printf("%#X\n",i); //加0X前最输出

	return 0;

}