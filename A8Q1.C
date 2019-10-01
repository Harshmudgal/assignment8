#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	printf("Enter the tot numbers");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		sum=sum+x%10;
		}
		printf("The sum is%d",sum);
		}



