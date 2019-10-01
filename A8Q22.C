#include<stdio.h>
void main()
{
	int n;
	printf("Enter the tot numbers");
	scanf("%d",&n);
	int c=1;
	int x;
	int sum=0;
	int d=1;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(d==i)
		{
			sum=sum+x;
			d+=c;
			c++;
			}
			}
			printf("Sum %d",sum);
			}

