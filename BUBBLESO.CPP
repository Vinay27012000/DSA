#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[100],i,j,size;
int temp;
void bubblesort(int arr[],int size){
for(i=1;i<size;i++){
for(j=0;j<size-i;j++)
{if(arr[j]>arr[j+1]){
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
}}}

}


void main(){
clrscr();
printf("\n enter size :");
scanf("%d",&size);
printf("\n enter %d elements \n",size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
bubblesort(arr,size);
for(i=0;i<size;i++)
printf(" %d",arr[i]);
getch();
}