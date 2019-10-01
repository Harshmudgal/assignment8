#include<stdio.h>
void main()
{
	int n,k,i,x;
	int sum=0;
	printf("Enter the tot numbwrand k");
	scanf("%d%d",&n,&k);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x) ;
		if(x%2==0)
		{
			k--;
			if(k==0)
			break;
			}
			}
			for(int j=i;j<n;j++)
			{       scanf("%d",&x);
				sum=sum+x;
				}
				printf("%d",x);
				}
