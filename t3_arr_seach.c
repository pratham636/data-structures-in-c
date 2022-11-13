#include<stdio.h>
int find(int index,int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==index)
        {
            return i+1;
        }
    }
}
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
    int size,a[200];
        scanf("size %d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    scanf("%d",&index);
    //int f=find(index,a,size);
  //  printf("LINEF : %d",f);
    int s=dinar(index,a,size);
    printf("\n%d",s);
    return 0;
}