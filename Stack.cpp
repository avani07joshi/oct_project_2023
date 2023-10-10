#include<iostream>
using namespace std;
#define X 4

int top = -1, inp_array[X];
void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int a;

    if (top == X - 1)
    {
        cout<<endl<<"Overflow";
    }
    else
    {
        cout<<endl<<"Enter the element to be added onto the stack:";
        cin>>a;
        top = top + 1;
        inp_array[top] = a;
    }
}

void pop()
{
    if (top == -1)
    {
        cout<<endl<<"Underflow";
    }
    else
    {
        cout<<endl<<"Popped element "<<inp_array[top];
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        cout<<endl<<"Underflow!!";
    }
    else
    {
        cout<<endl<<"Elements present in the stack: "<<endl;
        for (int i = top; i >= 0; --i)
            cout<<inp_array[i]<<endl;
    }
}