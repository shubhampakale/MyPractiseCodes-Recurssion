#include<iostream>

// Time complexity  O(n)
// Space complexity O(n)
void print(int i,int n)
{
	if(i>n) //base condition to terminate the program
	{
		return;
	}
	else
	{
		printf("\nHiiii....Shubham");
		i++;
		print(i,n);
	}
}
int main()
{
	int i=1,n;
	printf("Enter the value of n ");
	scanf("%d",&n);
	print(i,n);
	return 0;
}

									Recurssion tree
										
									  print(1,3)Hi shubham
									     /
									print(2,3)	Hi shubham
									   /
								 print(3,3)		Hi shubham
								 	 /
							   print(4,3)		base condition 
									
