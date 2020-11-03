#include <stdio.h>
#define max 10
int stack[max];
int TOP;
void init();
void PUSH(int x);
int POP();
int overflow();
int underflow();
void display();
int peek();
int size();
int main()
{
    int i,ch,x,y;
    do
    {
        printf("\n 1.Initialization,\n 2.PUSH,\n 3.POP,\n 4.overflow,\n 5.underflow,\n 6.display,\n 7.peek,\n 8.size,\n 9.exit");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1: init();
                break;
        case 2: printf("\n Enter variable for insertion or pushing");
                scanf("%d",&x);
                PUSH(x);
                break;
        case 3: x=POP();
                printf("\n the deleted element is %d",x);
                break;
        case 4: y=overflow();
                if(y==1)
                     printf("\n Oops Stack is overflow");
                else
                    printf("\n Yeah Stack is not overflow");
                break;
        case 5: y=underflow();
                if(y==1)
                    printf("\n Oops stack is underflow");
                else
                    printf("\n Yeah Stack is not underflow ");
                break;
        case 6:display();
               break;
        case 7: y=peek();
                printf("\n element is %d",y);
                break;
        case 8: y=size();
                printf("\n size of stack is %d",y);
                break;
        case 9: printf("\n exiting");
                break;

        default:printf("\n You have chosen wrong choice");
    }
    }while(ch!=9);
    return 0;
}
    void init()
    {
        TOP=-1;
    }


    void PUSH(int x)
    {
        if(TOP==(max-1))
            printf("\n Stack is overflow");
        else
        {
            TOP++;
            stack[TOP]=x;

        }
    }



   int POP()
   {

       int x;
       if(TOP==-1)
         printf("\n stack is empty");
       else
        {
            x=stack[TOP];
            TOP--;
            return(x);

       }
   }


   int overflow()
   {
       if(TOP==(max-1))
        return 1;
       else
        return 0;
   }



   int underflow()
   {
       if(TOP==-1)
        return 1;
       else
        return 0;
   }



   void display()
   {
       int i;
       if(TOP==-1)
        printf("\n sorry nothing to display ");
       else
       {
           for(i=TOP;i>-1;i--)
            printf("%d",stack[i]);
       }
   }



   int peek()
   {
       return(stack[TOP]);
   }


   int size()
   {
       return(TOP++);
   }


