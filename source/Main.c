#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("Enter three integer, and I will tell you\n程俱计の程俱计\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	int max = num1;
	int min = num1;
	if (num2 > max){
		max = num2;
	}
	else if (num2 < min){
		min = num2;
	}
	if (num3>max){
		max = num3;
	}
	else if (num3 < min){
		min = num3;
	}
	printf("程俱计琌%d\n程俱计琌%d\n", max, min);
	
	

	
	system("pause");
	return 0;
}