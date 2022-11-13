#include<stdio.h>
void qurtsort(int a[],int low,int high)
{
    int partitaonIndex;
    if(low<high)
    {
        partitaonIndex= partition(a,low,high);
        //printf("%d  ",partitaonIndex);
        qurtsort(a,low,partitaonIndex-1);
        qurtsort(a,partitaonIndex+1,high);
    }
}

    int partition(int a[],int low,int high)
    {
        int pivot=a[low];
        int  i=low+1;
        int j=high;
        int temp;

        do
        {
            while(a[i]<=pivot)
            {
                i++;
            }
            while (a[j]>pivot)
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        //print(a,10);
        }while(i<j);
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        return j;
    }
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main() 
{
    int a[]={8,9,7,6,10,4,3,5};
    int n=8;
    print(a,n);
    qurtsort(a,0,n-1);
    printf("\n\n");
    print(a,n);
    return 0;
}