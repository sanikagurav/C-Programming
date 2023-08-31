//program to accept the time required by an advertising agency for its advertising program
//Display the amount to be paid by agency for its advertisemment
//the rate per second is Rs.5000/- in doordarshan & Rs.2500/- in AIR

#include<stdio.h>
void main()
{
	int ts,amt;
	char ch;
	
	printf("\n 1)Doordarshan");
	printf("\n 2)AIR");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	printf("Enter time required for adverties in sec : ");
	scanf("%d",&ts);
	
	if(ch==1)
	{
		amt=ts*5000;
		printf("\n amt=%d",amt);
	}
	else if(ch==2)
	{
		amt=ts*2500;
		printf("\n amt=%d",amt);
	}
	
}
