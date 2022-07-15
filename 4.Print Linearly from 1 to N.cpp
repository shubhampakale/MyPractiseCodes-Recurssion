#include<bits/stdc++.h>
using namespace std;

int cnt=1;
void Print(int n)
{
	if(cnt==n+1) return;
	
	cout<<cnt<<endl;
	cnt++;
	Print(n);
}
int main()
{
	int n;
	cout<<"Enter the N to print"<<endl;
	cin>>n;
	Print(n);
	return 0;
}
