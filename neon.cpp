#include<iostream>
using namespace std;
int main()
{
	int i,n,sq,sum=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	sq=n*n;
	while(sq!=0)
	{
		sum=sum+sq%10;
		sq=sq/10;
	}
	if(sum==n)
	cout<<"neon number"<<n;
	else
	cout<<"not neon number"<<n;
	}

