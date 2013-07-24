# include <stdio.h>

int main(void)

{
/*
	int i;
	int sum = 0;

	for (i=1; i<=3; ++i)
		{	
		sum = sum + i;
		}
	printf("sum = %d\n", sum);

	
*/

/*
	//就1-10之间奇数的和，用循环实现。
	
	int i;
	int sum = 0;

	for (i=1; i<10; i+=2)
	{
		sum = sum + i;
	}

	printf("sum = %d\n", sum);

*/

	//求1-10间所有能被3整除的数的和

	int i;
	int sum = 0;
	for (i=3; i<=10; ++i)
	{
		
		if (i%3 == 0)
			sum = sum + i;
		
	}

	
	printf("sum = %d\n", sum);

	//练习题如下：
	//求1-100之间奇数之和
	//求1-100之间奇数个数
	//求1-100之间奇数平均值
	//求1-100之间奇数之和，偶数之和
	return 0;
}