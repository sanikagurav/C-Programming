//temp in Fahrenheit and convert it into Celsius
#include<stdio.h>
void main()
{
	float f,c;
	printf("Temperature in Fahrenheit : ");
	scanf("%f",&f);
	c=0.55*(f-32);
	printf("c=%f",c);
}
