
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct QUEUE{
int data;
struct QUEUE *next;
}node;

void enqueue(node **top,int item){
node *ptr=(node *)malloc(sizeof(node));
node *last=(*top);
ptr->data=item;
if(*top==NULL)
  {*top=ptr;
  ptr->next=NULL;
}
else{
while(last->next!=NULL){
last=last->next;}
last->next=ptr;
ptr->next=NULL;
  }
printf("\n item added!");
}

int dequeue(node **top){
node *ptr;
int item;
ptr=(*top);

item=ptr->data;
*top=ptr->next;
free(ptr);

return item;
}
void showqueue(node *top)
{
if(top==NULL)
printf("\n empty queue!");
else {
printf("\n elements in queue : ");
while(top!=NULL)
{printf(" %d",top->data);
top=top->next;
}      }
}
void main(){
int item,c;
node *top=NULL;
clrscr();
printf("\n press 1 for enqueue\npress 2 for dequeue\npress 3 for view queue\npress any for exit");
while(1){
printf("\n enter choice : ");
scanf("%d",&c);
switch(c){
case 1:
printf("\n enter value : ");
scanf("%d",&item);
enqueue(&top,item);break;
case 2:if(top==NULL){
printf("empty queue");}
else{
item=dequeue(&top);
printf("\n%d item removed",item);}
break;
case 3:showqueue(top);break;
default:exit(0);
}
}
getch();}