#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size],top=-1;
void main(){
int choice,value;
while(1){
printf("\n\n *****menu****\n");
printf("1.push\n2.pop\n3.dispaly\n4.exit");
printf("\n enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:printf("enter the value to be inserted:");
scanf("%d",&value);
push(value);
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
default:("wrong choice,choose the right one");
}
}
}
void push(int value){
if(top==size-1)
printf("overflow cannot insert the value");
else{
top++;
stack[top]=value;
printf("insertion succesful");
}
}
void pop(){
if(top==-1)
printf("underflow cannot delete a value");
else{
printf("\n deleted :%d",stack[top]);
top--;
}
}
void display(){
if(top==-1)
printf("underflow cannot delete a value");
else{
int i;
printf("the stack elements are:");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
}
