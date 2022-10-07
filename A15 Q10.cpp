#include<stdio.h>
int main()
{
	int arr[26],dup[26];
	int n,i,j,cnt;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		dup[i]=-1;
		for(i=0;i<n;i++)
		{
			cnt=1;
			for(j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					cnt++;
					dup[i]!=0;
				}
			}
			if(dup[i]!=0)
			{
				dup[i]=cnt;
			}
		}
		for(i=0;i<n;i++)
		{
			if(dup[i]!=0)
			printf("%d occurs %d time \n",arr[i],dup[i]);3
		}
	}
}
