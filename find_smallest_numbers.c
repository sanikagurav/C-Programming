#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1<n2 && n1<n3)
	{
		if(n1<n2)
		{
			printf("\n n1 is samllest number : %d");
		}
		else
		{
			printf("\n n2 is samllest number : %d");
		}
		if(n1<n3)
		{
			printf("\n n1 is samllest number : %d");
		}
		else
		{
			printf("\n n3 is samllest number : %d");
		}
	}
	
}
