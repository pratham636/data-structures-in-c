#include<stdio.h>
#include<stdlib.h>

void printval(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertsort(int* a,int n)
{
    int j;
    for(int i=1;i<=n-1;i++)
    {
    int key=a[i];
    j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
    int a[]={30,20,10};
    int n=3;
    printval(a,n);
    insertsort(a,n);
    printval(a,n);
    return 0;   
}