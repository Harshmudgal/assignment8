#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	printf("Enter the numbers");
	int i;
	for(i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x) ;
		if(x%2==0)
		{
		  break;
		  }
		  }
	 for(int j=i;j<n;j++)
	 {
		int x;
		scanf("%d",&x);
		sum=sum+x;
		}
		printf("%d",sum);
		}



