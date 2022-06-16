#include<stdio.h>

//   MIDDLE NUMBER 
//    INPUT = 11 12 16 
//     OUTPUT = 12

int middle(int n1, int n2, int n3)
{
	if ((n1<n2 && n2<n3) || (n3<n1 && n2<n1))
	{
		printf("%d\n",n2);
		return 0;
	}
	else if ((n1<n2 && n1>n3) || (n1>n2 && n1<n3))
	{
		printf("%d\n",n1);
		return 0;
	}
	else
	{
		printf("%d\n",n3);
	}
}

int main()
{
	int a,b,c;
	
	printf("Enter the value of a ,b ,c :\n");
	scanf("%d%d%d",&a,&b,&c);
	
	middle(a,b,c);
	
	return 0;
}
