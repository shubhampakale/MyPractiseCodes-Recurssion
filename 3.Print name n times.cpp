#include<bits/stdc++.h>
using namespace std;

int cnt=0;
void Print(int n)
{
	if(cnt==n) return;
	
	cout<<"Hi..Shubham"<<endl;
	cnt++;
	Print(n);
}

int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	Print(n);
	return 0;
}
