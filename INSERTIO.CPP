#include<stdio.h>
#include<conio.h>
void insertionsort(int a[],int n)
{
int k,j,temp;
for(k=1;k<n;k++){
temp=a[k];
j=k-1;
while(temp<a[j] && j>=0){
a[j+1]=a[j];
j=j-1; }
a[j+1]=temp;
}
printf("\n sorted array \n");
for(k=0;k<n;k++)
printf("%d ",a[k]);
}

void main(){
int a[100],size,i;
clrscr();
printf("\nenter array size: ");
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
insertionsort(a,size);
getch();
}