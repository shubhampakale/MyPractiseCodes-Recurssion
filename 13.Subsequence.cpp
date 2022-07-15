
// Runs on online compiler 
//error in dev c++

#include<bits/stdc++.h>
using namespace std;

void f(int ind,vector<int> &ds,int arr[],int n)
{
	if(ind==n) 
	{
		for(auto ele : ds) 
		{
			cout<<ele<<" ";
		}
		if(ds.size()==0) cout<<"{}";
		cout<<endl;
		return;
	}
	

	f(ind+1,ds,arr,n);
	//take the particular index into subsequence
	ds.push_back(arr[ind]);
	f(ind+1,ds,arr,n);
	
	//dont take the particular index into subsequence
	ds.pop_back();
		
}


int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	
	int arr[n]; 
	for(int i=0;i<n;i++) cin>>arr[i];
	
	vector<int> ds;
	
	f(0,ds,arr,n);
	return 0;
}
