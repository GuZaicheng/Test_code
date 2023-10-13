//打印菱形01数列
#include<stdio.h>
#include<math.h>
int main()
{
	int i,m,j,s,p;
	int q;
	int d1,d2,d3;
	scanf("%d",&s);
	for(i=1;i<=s;i++){
	
		for(j=s-1;j>=i;j--)
		{
			printf(" ");
		}
		printf("1");
		for(j=1;j<i;j++)
		{
			printf("01");
		}
		printf("\n");
		
}
	for(i=1;i<s;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		printf("1");
		for(j=s-i-1;j>0;j--)
			printf("01");
	printf("\n");
	}

	return 0;
}