//input basic salary of employee and calculate gross salary to given condition
//basic salary <= 10000; HRA = 20%, DA = 80%
//basic salary is between 10001 to 20000; HRA = 25%, DA = 90%
//basic salary >= 20001; HRA = 30%, DA = 95%
#include<stdio.h>
void main()
{
	int bsalary,gsalary;
	float HRA,DA;
	printf("Enter Basic salary of employees : ");
	scanf("%d",&bsalary);
	if(bsalary<=10000)
	{
		HRA=bsalary*0.2;
		DA=bsalary*0.8;
		gsalary=bsalary+HRA+DA;
		printf("HAR=%f,DA=%f",HRA,DA);
		printf("gross salary=%d",gsalary);
	}
	else if(bsalary>=10001 && bsalary<=20000)
	     HRA=bsalary*0.25;
	     DA=bsalary*0.9;
	     gsalary=bsalary+HRA+DA;
	     printf("HAR=%f,DA=%f",HRA,DA);
		 printf("gross salary=%d",gsalary);
		  
	if(bsalary>=20001)
	{
        HRA=bsalary*0.3;
        DA=bsalary*0.95;
        gsalary=bsalary+HRA+DA;
        printf("HAR=%f,DA=%f",HRA,DA);
		printf("gross salary=%d",gsalary);
	}
}
