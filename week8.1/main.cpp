#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	float student[10] , sum = 0 , avg;
	for (int i = 0; i < 10; i++)
	{
		printf("Student[%d]'s height(cm) = ", i + 1);
		scanf("%f", &student[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		sum = sum + student[i];
	}
	printf("\n");
	avg = sum / 10;
	printf("Sum of height(cm) = %.2f\n", sum);
	printf("Avg of height(cm) = %.2f\n", avg);

	return 0;
}