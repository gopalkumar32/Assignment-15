#include<stdio.h>
void hello(int[],int);
int main()
{
        int a[]={1,2,3,4,2,6,7,7,1,10},i=10;
        printf("\n");
        hello(a,i);
}
void hello(int j[],int i)
{
        int k,l,count=0;
        for(k=0;k<10;k++)
        {
                
        for(l=k+1;l<10;l++)
        {
                if(j[k]==j[l])
                count++;
        }
        }
        printf("Total number dublication is %d ",count);
}
