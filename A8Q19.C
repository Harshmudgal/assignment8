#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	printf("Enter the tot numbwr");
	scanf("%d",&n);
	int x;
	int i;
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			sum=sum+x;
			break;
			}
			}
	  for(int j=i;j<n;j++)
	  {
		scanf("%d",&x);
		sum=sum+x;
		}
		printf("%d",sum);
		}




