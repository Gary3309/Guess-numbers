#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int a,b,c;
	int ans;
	srand((unsigned)time(NULL));
	b=rand()%101 ;
	a=0 ;
	c=100 ;
	ans=999;
	while(ans!=b)
	{
		printf("�п�J�@�Ʀr>");
		scanf("%d",&ans);
			if(ans>a && ans<b )
				a=ans ;
			if(ans>b && ans <c)
				c=ans;
			if(ans==b)
				printf("�A����F!!\n");
			else
				printf("����%d�M%d����!",a,c);
	}
	return(0);
}
