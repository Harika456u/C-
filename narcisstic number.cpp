#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,cr,r;
	cin>>n;
	cr=r;
	while(n>0)
	{
		i=n%10;
		sum+=i*i*i;
		n=n/10;
	}
	if(cr==sum)
	cout<<"narcisstic number";
	else
	cout<<" not narcisstic number";
	
	}
