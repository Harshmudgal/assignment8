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
		if(x%2!=0)
		{
			sum++;
			}
			}
			printf("%d",sum);
			}
