#include<stdio.h>

    void display(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }printf("\n");
    }
    int insert(int arr[],int size,int element,int tsize,int index)
    {
        if(size>=tsize){printf("Error");return -1;}
        for(int i=size-1;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }arr[index]=element;
        return 1;
    }
    int delete(int arr[],int size,int element,int tsize,int index)
    {
        for(int i=index;i<=size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        return 1;
    }
    int main()
    {
        int arr[100]={5,74,42,25,4};
        int size=5,element=45,index=1;
        display(arr,size);
        insert(arr,size,element,100,index);
        size+=1;
        display(arr,size);
        delete(arr,size,element,100,3);
        size-=1;
        display(arr,size);
        return 0;
    }