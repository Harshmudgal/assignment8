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
		int a=(x%100)/10;
		int b=x%10;
		int c=((x%100)*100)+(b*10)+a;
		sum=sum+c;
		}
		printf("%d",sum);
		}
