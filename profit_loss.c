#include<stdio.h>
void main()
{
	int cp,sp,profit,loss;
	printf("Enter cost price and selling price : ");
	scanf("%d %d",&cp,&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("Seller get profit : RS.%d");
	}
	else
	{
		loss=cp-sp;
		printf("Seller get loss : RS.%d");
	}
}
