#include <stdio.h>

int main()
{

	double value1, value2, A;
	char operation;

	while(1)
	{
		if(scanf("%lf %c %lf", &value1,&operation, &value2) != 3)break;

		switch(operation)
		{
			case '+': 
				A = value1 + value2;
				break;
			case '-': 
				A = value1 - value2;
				break;
			case '*': 
				A = value1 * value2;
				break;
			case '/': 
				if(value2 == 0)
				{
					printf("error\n");
					continue;
				}
				
				A = value1 / value2;
				break;
			default:
				printf("error\n");
				continue;
		}
		printf("%g%n\n", A);
	}



}