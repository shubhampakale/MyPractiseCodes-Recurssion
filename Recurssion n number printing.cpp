#include<stdio.h>

/* 
					1 to N
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
*/

// N to 1 without global variable
void print(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		printf("\n%d",n);
		print(n-1);
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
