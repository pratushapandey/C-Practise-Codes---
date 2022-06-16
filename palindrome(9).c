#include<stdio.h>

/* Given an integer, check whether it is a palindrome or not.

Example 1:

Input: n = 55555
Output: Yes

Example 2:

Input: n = 123
Output: No */

int is_palindrome(int n)
{
	int number = n;
	int sum=0;
	while(n!=0)
	{
	   sum = sum*10 + n%10;
	   n=n/10;
    }
	
	if (number==sum)
	{
		printf("%d is palindrome\n",number);
	}
	else
	{
		printf("%d is not palindrome\n",number);
	}
}

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	is_palindrome(n);
	
	return 0;
}
