#include<stdio.h>

//   CALCULATE THE PRIME NUMBER BETWEEN TWO INTERVAL IN INTERATIVE WAY

int main()
{
	int low, high, i, flag;
	
	printf("Enter the two numbers:\n");
	scanf("%d%d",&low,&high);
	
	printf("Prime Numbers between %d to %d is:",low,high);
	printf("\n");
	
	while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      for (i = 2; i <= low / 2; ++i) {
         if (low % i == 0) {
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         printf("%d ", low);
      ++low;
   }

   return 0;
}
