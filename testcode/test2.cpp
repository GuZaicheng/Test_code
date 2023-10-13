//判断数字有几个0组成
#include<stdio.h>
int main()
{
	int q,c,s,m,t;
	scanf("%d",&t);
	m=1;
	q=t;
	c=0;
	while(t>9)
	{
		t/=10;
		m*=10;
	}
	while(m>0)
	{
		s=q/m;
		q%=m;
		m/=10;
		if(s==0||s==6||s==9)
			c++;
		else if(s==8)
			c=c+2;
	}
	printf("%d\n",c);
	return 0;
	}
