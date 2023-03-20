#include<bits/stdc++.h>
using namespace std;

void f(int l,int arr[],int r)
{
	if(l>=r)	return ;

	swap(arr[l],arr[r]);
	f(l+1,arr,r-1);
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=0,r=n-1;
	f(l,arr,r);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}

	return 0;
}
