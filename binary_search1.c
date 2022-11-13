#include<stdio.h>
int dinar(int index,int a[],int size)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(a[mid]==index)
        {return mid+1;}
        else if(a[mid]<index)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
}
int main()
{
    int size=6,a[200]={1,2,3,4,5,6};
        //scanf("size %d",&size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    int index=2;
    //scanf("%d",&index);
    int s=dinar(index,a,size);
    printf("\n%d",s);
    return 0;
}