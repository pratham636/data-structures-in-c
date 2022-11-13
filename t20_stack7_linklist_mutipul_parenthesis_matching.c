#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    char *arr;
    int top;
};
void push(struct stack *ptr,char value)
{
    if(ptr->size-1==ptr->top)
    {
        printf("overflow %d\n",value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
char pop(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int match(char popped_ch,char exp)
{
    if(popped_ch=='('&&exp==')')
    {
        return 1;
    }
        if(popped_ch=='{'&&exp=='}')
    {
        return 1;
    }
        if(popped_ch=='['&&exp==']')
    {
        return 1;
    }
    return 0;
}
int parenthesismatch(char * exp)
{
    struct stack* sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    char popped_ch;

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(sp->top==-1)
            {
                return 0;
            }
            popped_ch=pop(sp);
            if(!match(popped_ch,exp[i]))
            {
                return 0;
            }
        }
    }
    if(sp->top==-1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char *exp="{(8+89)/(67*(67/89)#[(s456)])}";
    if(parenthesismatch(exp))
    {
        printf("The parenthesismatch is match.\n");
    }
    else
    {
        printf("The Parenthesismatch is not match.\n");
    }
    return 0;
}