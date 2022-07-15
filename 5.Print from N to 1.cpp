#include<bits/stdc++.h>
using namespace std;


Print(int n,int cnt)
{
	if(cnt==0)return 0;
	
	cout<<cnt<<endl;
	cnt--;
	Print(n,cnt);
}
int main()
{
	int n;
	cout<<"Enter the value of N"<<endl;
	cin>>n;
	int cnt=n;
	Print(n,cnt);
	return 0;
}
