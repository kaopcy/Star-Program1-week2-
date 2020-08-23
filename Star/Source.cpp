#include<stdio.h>
int main()
{
	int x, i = 0;
	printf("Enter row of star : ");
	scanf_s("%d", &x);
	while (i < x)
	{
		int j = 0;
		while (j <= i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
}