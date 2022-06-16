#include<stdio.h>

//        REVERSE OF A NUMBER 

//     INPUT = 15                / OUTPUT = 51
int findReverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}

int main()
{
   int number, reverse;

   printf("Enter a positive interger: ");
   scanf("%d", &number);

   reverse = findReverse(number);

   printf("The reverse of %d is: %d", number, reverse);

   return 0;
}
