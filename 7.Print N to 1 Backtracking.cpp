#include<bits/stdc++.h>
using namespace std;


void Print(int i,int n)
{
	if(i>n) return;
	
	
	Print(i+1,n);
	cout<<i<<endl;
	
}
int main()
{
	int n;
	cout<<"Enter the value of N"<<endl;
	cin>>n;
	
	Print(1,n);
	return 0;
}
