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
		scanf("%d",&x) ;
		int y;
		scanf("%d",&y);
		sum=sum+x*y;
		}
		printf("%d",sum);
		}
