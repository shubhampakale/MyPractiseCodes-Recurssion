#include<stdio.h>
int count=1;
void print(int n)
{
	if(count==n+1)
	{
		return;
	}
	else
	{
		printf("\n%d",count);
		count++;
		print(n);
	}
}

int main()
{
	int n;
	printf("Enter the value of n to print\n");
	scanf("%d",&n);
	
	print(n);
	return 0;	
}
