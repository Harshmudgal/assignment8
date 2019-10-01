#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(int i=1;i<n+1;i++)
	{
		int x;
		scanf("%d",x) ;
		sum=sum+i*x;
		}
		printf("%d",sum);
		}


