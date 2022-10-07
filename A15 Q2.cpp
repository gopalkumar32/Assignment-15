#include<stdio.h>
int great(int a[]);
int main()
{
        int a[5],size;
        size=great(a);
        printf("maxmium value in array is %d ",size);
}
 int great(int b[5])
{
        int i,max=99999;
        for(i=1;i<=5;i++)
        scanf("%d",&b[i]);
        for(i=1;i<=5;i++)
        {
                if(max>=b[i])
                max=b[i];
        }
        return max;
}
