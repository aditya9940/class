#include<stdio.h>
#include<time.h>
void quicksort(int number[25],int first,int last)
{
int i, j, pivot, temp;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);

}
}

int main()
{
int i, count, number[25],et,st,total;

printf("How many elements are u going to enter?: ");
scanf("%d",&count);

printf("Enter %d elements: ", count);
for(i=0;i<count;i++)
scanf("%d",&number[i]);

st=clock();
quicksort(number,0,count-1);
et=clock();
total=et-st;
printf("st is %d and et is %d\n",st,et);
printf("total is %d",total);

printf("Order of Sorted elements: ");
for(i=0;i<count;i++)
printf(" %d",number[i]);

return 0;
}
