#include<stdio.h>
void main()
{
	int n,x;
	int sum=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	printf("Enter the numbers");
	int i;
	for(i=0;i<n;i+=2)
	{
		int y;
		scanf("%d%d",&x,&y) ;
		if(x%2==0&&y%2==0)
		break;
		}
	 for(int j=i;j<n;j++)
	 {
		x;
		scanf("%d",&x);
		sum=sum+x;
		}
		printf("%d",x);
		}



