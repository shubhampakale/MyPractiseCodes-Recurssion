
//nearly to the 2 to the power n time complexity    every call is calling another 2 recurssion calls  
// Exponential in nature 

#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
	if(n<=1) return n;
	
	return f(n-1)+f(n-2);
}



int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	cout<<f(n);
	return 0;
}
