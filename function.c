#include <stdio.h>
int main()
{
	int opt;
	int var1;
	int var2;
	int i, n, sum = 0, num;
	float avg;	
	
	printf("1: Addition\n2: Subtraction\n");
	printf("Enter the number correspoding to the function you want to perform:\n");
	scanf("%d",&opt);
	
	switch(opt)
	{	
		//Addition function
		case 1:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d + %d = %d\n", var1, var2, var1 + var2);
		break;
		
		//Subtraction function
		case 2:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d - %d = %d\n", var1, var2, var1 - var2);
		break;


	}	
	return 0;
}