#include<stdio.h>

//            SIMPLE CALCULATOR USING SWITCH CASE

int main()
{
	int a,b, choice;
	printf("Enter the numbers:\n");
	scanf("%d%d",&a,&b);
	printf("\n");
	
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition:%d\n",a+b);
			break;
			
		case 2:
			printf("Subtraction:%d\n",a-b);
			break;
		
		case 3:
			printf("Division:%d\n",a/b);
			break;
			
		case 4:
			printf("Multiplication:%d\n",a*b);
			break;
			
		default:
			printf("Wrong Option");
	}
}
