#include<stdio.h>
 void great(int a[]);
int main()
{
        int a[5],size=5;
        great(a);
}
 void great(int b[5])
{
        int i,max=0;
        for(i=1;i<=5;i++)
        scanf("%d",&b[i]);
        for(i=1;i<=5;i++)
        {
                if(max<=b[i])
                max=b[i];
        }
        printf("MAximum number in  array is %d",max);
}
