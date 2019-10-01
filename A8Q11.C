#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",x) ;
		int a=x%10;
		if(a%2!=0)
		sum=sum+x;
		}
		printf("%d",sum);
		}










