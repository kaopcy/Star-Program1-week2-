#include<stdio.h>
int main()
{
	float x, y;
	printf("Enter Fahrenheit : ");
	scanf_s("%f", &x);
	y = (x - 32) * 5 / 9;

	if (y <= 0)
	{
		printf("Celsius is %.3f \nit too cold to live", y);
	}
	else if (y > 0 && y < 50)
	{
		printf("Celsius is %.3f \nHuman can live in this temperature", y);
	}
	else
	{
		printf("Celsius is %.3f \nit too hot to live", y);
	}
}