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
    return -1;
}
int main()
{
    int size=5,a[20]={1,2,3,4,5};
    //    scanf("size %d",&size);
    for(int i=0;i<size;i++)
    {
      //  scanf("%d",&a[i]);
      printf("%d ",a[i]);
    }
    int index=5;
    //scanf("%d",&index);
    int f=find(index,a,size);
    printf("\nLINEF : %d",f);
    return 0;
}