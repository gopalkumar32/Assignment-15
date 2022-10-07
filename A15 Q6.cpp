#include<stdio.h>
void hello(int[],int);
int main()
{
        int a[]={1,2,3,4,5,6,7,8,9,10},i=10;
        for(i=0;i<10;i++)
        {
        printf("%d ",a[i]);
        }
        printf("\n");
        hello(a,i);
}
void hello(int j[],int i)
{
        int k;
        for(k=i-1;k>=0;k--)
        {
                printf("%d ",j[k]);
        
        }
}
