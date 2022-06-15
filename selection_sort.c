#include<stdio.h>
#include<conio.h>
#include<time.h>
void selectsort(int n,int a[])
{
    int i,j,temp;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j] <=a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

}
void main()
{
    clock_t start,end;
    int a[15500],i,j,temp;

    int n=500;
    while(n<14500)
    {
        for(i=0; i<n; i++)
        {

            a[i]=n-i;
        }

        start=clock();
        selectsort(n,a);
        for(j=0; j<500000; j++)
        {
            temp=38/600;
        }
        end=clock();
        printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
        n=n+1000;
    }
}
