#include<stdio.h>
int main()
{
	float x,y;
	printf("How far do you want to go? (km) : ");
	scanf_s("%f", &x);
	printf("How fast do you drive? (km/hr) : ");
	scanf_s("%f", &y);
	if (y <= 120)
	{
		printf("You still safe in this speed.\n");
	}
	else
	{
		printf("That's too fast! You better less your speed.\n");
	}
	float z = x / y;
	float t = z * 60;
	printf("You'll be there in %.1f min.",t);
	return 0;
}