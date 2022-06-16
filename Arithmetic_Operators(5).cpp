#include<stdio.h>

//             ARITHMETIC OPERATIONS
//         Given two numbers A and B. Perform addition,multiplication, subtraction and division on these two numbers.

int main()
{
	int a, b;
	
	printf("Enter the values of a and b:\n");
	scanf("%d %d",&a,&b);
	
	printf("Addition:%d\n",a+b);
	printf("Multiplication:%d\n",a*b);
	printf("Subtraction:%d\n",a-b);
	printf("Division:%d\n",a/b);
	
	return 0;
}
