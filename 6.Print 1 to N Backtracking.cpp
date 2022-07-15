#include<bits/stdc++.h>
using namespace std;


void Print(int i,int n)
{
	if(i<1) return;
	
	else
	{
		
		Print(i-1,n);
		cout<<i<<endl;
		
	}
}
int main()
{
	int n;
	cout<<"Enter the value of N"<<endl;
	cin>>n;
	Print(n,n);
	return 0;
}
