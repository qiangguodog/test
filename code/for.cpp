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
	//��1-10֮�������ĺͣ���ѭ��ʵ�֡�
	
	int i;
	int sum = 0;

	for (i=1; i<10; i+=2)
	{
		sum = sum + i;
	}

	printf("sum = %d\n", sum);

*/

	//��1-10�������ܱ�3���������ĺ�

	int i;
	int sum = 0;
	for (i=3; i<=10; ++i)
	{
		
		if (i%3 == 0)
			sum = sum + i;
		
	}

	
	printf("sum = %d\n", sum);

	//��ϰ�����£�
	//��1-100֮������֮��
	//��1-100֮����������
	//��1-100֮������ƽ��ֵ
	//��1-100֮������֮�ͣ�ż��֮��
	return 0;
}