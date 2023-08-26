#include<stdio.h>
void main()
{
	int hours,min,total_min;
	printf("Enter hours and minutes : ");
	scanf("%d %d",&hours,&min);
	total_min=(hours*60)+min;
	printf("tmin=%d",total_min);
}
