#include<stdio.h>
#include<math.h>
int funcArmstrong(int n)	
{
	int originalNum, rem , count = 0, flag;
	double result = 0.0;
	
	for(originalNum = n; originalNum != 0 ; count++)
    originalNum/= 10;
	
	for(originalNum = n; originalNum != 0; originalNum/=10){
	rem = originalNum % 10;
	
	result += pow(rem,count);
    }
    if (result == n)
    flag = 1;
    
    else
    flag = 0;
    
    return flag;
	
}

int main()
{
	int n,flag;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	flag = funcArmstrong(n);
	if (flag == 1)
	printf("Number is Armstrong");
	else
	printf("Number is not Armstrong");
	
	return 0;
}
