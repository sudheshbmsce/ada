#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int choice=0,i,n,ele,flag=0,a[10000];
    clock_t start,end;
    while(choice!=3)
    {

        printf("\n1) linear search\n");
        printf("2)binary search\n");
        printf("3) exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value of n\n");
            scanf("%d",&n);

            for(i=0; i<n; i++)
            {
                a[i]=i;

            }
            printf("enter the element to search\n");
            scanf("%d",&ele);
            start=clock();

            delay();
            flag=linear(a,ele,flag,n);
            end=clock();
            printf("the value is present at %d\n",flag);
            printf("time for n=%d is %2f secs\n",n,((end-start)/CLOCKS_PER_SEC));
            break;
        case 2:
            printf("enter the value of n\n");
            scanf("%d",&n);

            for(i=0; i<n; i++)
            {
                a[i]=i;

            }
            int mid;
            printf("enter the element to search\n");
            scanf("%d",&ele);
            mid=binarySearch(a,0,n-1,ele);
            if(mid!=-1)
                printf("\nthe value is present at %d\n",mid);
            else
                printf("element not found\n");


            break;
        case 3:
            break;
        default:
            printf("invalid choice\n ");

        }
    }
}

int linear(int a[],int ele,int flag,int n)
{



    if(ele==a[flag])
    {
        flag=flag+1;
        return flag;
    }
    flag=flag+1;
    if(flag!=n+1)
        return linear(a,ele,flag,n);
    else
    {
        printf("element not found \n");

    }
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}
void delay()
{

    unsigned long int j,temp;
    for(j=0;j<500000;j++)
        temp=39/550;
}


