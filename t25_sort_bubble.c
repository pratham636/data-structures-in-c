#include<stdio.h>
#include<stdlib.h>

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubblesort(int a[],int n)
{
    int temp;
    int isSorted=0;
    for(int i=0;i<(n-1);i++)
    {
        isSorted=1;
        for(int j=0;j<(n-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}
int main()
{
    int a[5]={14,33,27,35,10};
    int n=5;
    print(a,n);
    printf("\n\n");
    bubblesort(a,n);
    print(a,n);
    return 0;
}