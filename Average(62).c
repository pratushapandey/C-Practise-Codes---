#include<stdio.h>

// CALCULATING THE AVERAGE OF A NUMBER

int main()
{
	int n,i;
	float a[99], sum = 0.0, avg;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	
	if(n <= 0 || n >100)
	{
		printf("Enter the number in range 1 to 100\n");
		printf("Enter the number again:\n");
		scanf("%d",&n);
	}
	
	for(i = 0; i < n; i++){
	printf("%d. Enter the number:",i+1);
	scanf("%f",&a[i]);
	sum += a[i];
    }
    
	avg= sum/n;
	printf("Average is:%0.2f",avg);
	
	return 0;
}
