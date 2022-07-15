#include<bits/stdc++.h>
using namespace std;


int n=1;
void Print()
{
	if(n == 101) return;
	
	else
	{
		cout<<n<<endl;
		n++;
		Print();
	}
}
int main()
{

	Print();
	return 0;
}
