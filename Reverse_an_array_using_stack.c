#include<stdio.h>
#define max 50
int top=-1,st[max],val;
void push(int st[],int val);
int pop(int st[]);
int main()
{ 
 int n,temp,i;
 printf("enter no of elements");
 scanf("%d",&n);
 int arr[n];
 printf("Enter %d  elements for array:\n",n);
 for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
    push(st,arr[i]);
   }
   printf("Reversed array\n");
 for(i=0;i<n;i++)
   {
   	 temp = pop(st);
   	 printf("%d\n",temp);
   }
 return 0;
}
//for push
void push(int st[],int val)
{ 
    if(top == max-1)
	   printf("Stack Overflow");
	else 
	   top++;
	   st[top]=val;
}
//for pop
int pop(int st[])
{ 
    val=st[top];
	top--;
	return(val);
}
