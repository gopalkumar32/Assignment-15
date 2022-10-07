#include<stdio.h>
int main()
{
	int a[]={1,1,2,3,3,4},i,j;
	for(i=0;i<=5;i++)
	{
		if(a[i]==a[i+1])
		printf("%d",a[i]);
		break;
	}
}
