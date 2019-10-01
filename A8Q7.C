#include<stdio.h>
void main()
{
	int n;
	int x;
	int big=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	printf("Enter the numbers");
	scanf("%d",&x);
	big=x;
	for(int i=0;i<n-1;i++)
	{

		scanf("%d",&x);
		if(big<x)
		big=x;
		}
		printf("%d",big);
		}


