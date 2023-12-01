#include<iostream>
using namespace std;
int main()
{
	int i,n,m=0,flag=0;
	cout<<"enter an number"<<endl;
	cin>>n;
	m=n/2;
	for(i=1;i<=m;++i)
	{
		if(n%i==0)
		{
			cout<<"it is a not prime number"<<endl;
			flag=1;
			break;
		}
		if(flag==0)
		{
			cout<<"it is  a prime number"<<endl;
		}
		}
	}
