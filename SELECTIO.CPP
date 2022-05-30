#include<stdio.h>
#include<conio.h>
int a[100],size;

void smallest (int a[],int n,int k,int *loc){
int small=a[k-1],j;
*loc=k-1;
for(j=k;j<n;j++){
if(a[j]<small)
{ small=a[j];
*loc=j;
  }
}
}

void selectionsort(int a[],int n){
int temp,loc,i;
for(i=0;i<=n-1;i++)
{
smallest(a,n,i,&loc);
temp=a[i-1];
a[i-1]=a[loc];
a[loc]=temp;
}
printf("\n sorted array\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}


void main(){
int i;
clrscr();
printf("\n enter the size of an array : ");
scanf("%d",&size);

printf("\n enter %d elements :\n",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
selectionsort(a,size);
getch();
}