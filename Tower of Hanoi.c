#include<stdio.h>
void TOH(int n,char x,char y,char z)
{
   if(n>0)
   {
      TOH(n-1,x,z,y);
      printf("\n%c to %c",x,y);
      TOH(n-1,z,y,x);
   }
}
int main()
{
   int n;
   printf("Enter Number of disks: ");
   scanf("%d", &n);
   TOH(n,'A','B','C');
}
