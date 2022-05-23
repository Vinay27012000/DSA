#include<stdio.h>
#include<conio.h>
void toa(int n, char beg,char aux,char end){
if(n!=0){
toa(n-1,beg,end,aux);
printf("\n %c --> %c",beg,end);
toa(n-1,aux,beg,end);
}
}

void main(){
int n;
char beg='A',end='C',aux='B';
clrscr();
printf("\n enter no of disc :");
scanf("%d",&n);

toa(n,beg,aux,end);
getch();
}