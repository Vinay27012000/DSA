#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct stackNode{
int data;
struct stackNode *next;
}node;

void pushstack(node **top,int item){
node *ptr=(node *)malloc(sizeof(node));
ptr->data=item;
if(*top==NULL)
  {*top=ptr;
  ptr->next=NULL;
}
else{
ptr->next=(*top);
*top=ptr;
  }
printf("\n item pushed into stack !");
}

int popstack(node **top){
node *ptr;
int item;
ptr=(*top);

item=ptr->data;
*top=ptr->next;
free(ptr);

return item;
}
void showtop(node *top)
{if(top==NULL)
printf("'n empty stack!");
else
printf("top item in stack is %d",top->data);
}
void main(){
int item,c;
node *top=NULL;

printf("\n press 1 for push\npress 2 for pop \npress 3 for view top of stack\npress any for exit");
while(1){
printf("\n enter choice : ");
scanf("%d",&c);
switch(c){
case 1:
printf("\n enter value : ");
scanf("%d",&item);
pushstack(&top,item);break;
case 2:if(top==NULL){
printf("empty stack");}
else{
item=popstack(&top);
printf("\n%d item poped",item);}
break;
case 3:showtop(top);break;
default:exit(0);
}
}
getch();}