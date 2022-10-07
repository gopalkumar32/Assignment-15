#include<stdio.h>
void great(int a[],int);
int main()
{
        int a[5],size;
        printf("Entre the value of size\n");
        scanf("%d",&size);
        great(a,size);
}
void great(int b[],int size )
{
        int i,j,temp;
        for(i=1;i<=size;i++)
        scanf("%d",&b[i]);
        for(i=1;i<=size;i++)
        {
                for(j=i+1;j<=size;j++)
                {
                        if(b[i]>b[j])
                        {
                                temp=b[i];
                                b[i]=b[j];
                                b[j]=temp;
                        }
                }
        }
        for(i=1;i<=10;i++)
        printf("%d ",b[i]);
}
