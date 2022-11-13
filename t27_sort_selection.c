#include<stdio.h>
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d = %d\n",i,a[i]);
    }
    printf("\n");
}

void selection(int *a,int n)
{
    int index;
    for(int i=0;i<n-1;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index])
            {
                index=j;
            }
        }
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}

int main()
{
    int a[]={12,32,76,1,2,54};
    int n=6;
    print(a,n);
    selection(a,n);
    print(a,n);
    return 0;
}