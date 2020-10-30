
#include<stdio.h>
#include<conio.h>
#define max 10
char stk[max];
int top=-1;
void push(char);
char pop();
void main()
{
int i;
char st[10],x;
printf("\nRead string");
gets(st);
for(i=0;i<strlen(st);i++)
push(st[i]);
while(top>-1)
printf("%c",pop());
getch();
}
void push(char ch)
{
if(top==(max-1))
printf("Stack overflow");
else
{                                                        
top++;
stk[top]=ch;
}
 }
 char pop()
 { 
char x;
 if(top==-1)
 printf("stack underflow");
 else
 {
 char x = stk[top];
 top--;
 return (x);
}

