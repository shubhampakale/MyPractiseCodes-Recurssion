#include<bits/stdc++.h>
using namespace std;

//Functional
int sum(int n)
{
	if(n==0)
	return 0;
	
	else
	return n+sum(n-1);
}
int main()
{
	int n;
	cout<<"Enter the value of N"<<endl;
	cin>>n;
	cout<<sum(n)<<endl;
	
	return 0;
}





// Parameterised

//void Sum(int i,int sum)
//{
//	if(i<1)
//	{
//		cout<<sum<<endl;
//		return;
//	}
//	Sum(i-1,sum+i);
//}
//int main()
//{
//	int n;
//	cout<<"Enter the value of N"<<endl;
//	cin>>n;
//	Sum(n,0);
//	
//	return 0;
//}

